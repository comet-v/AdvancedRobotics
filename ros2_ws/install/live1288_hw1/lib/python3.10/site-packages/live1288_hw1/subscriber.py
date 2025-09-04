import rclpy
from rclpy.node import Node
from std_msgs.msg import Header
import matplotlib.pyplot as plt

class LatencySubscriber(Node):

    # constructor
    def __init__(self):
        super().__init__('Latency_subscriber')
        self.subscription = self.create_subscription(
            Header,
            'latency_topic',
            self.listener_function,
            10) # a buffer of 10
            
        self.latencies = []
        self.count = 0
        self.max_messages = 400

    # on receipt of a message
    def listener_function(self, msg):
    
        current_time = self.get_clock().now().nanoseconds / 1e9  # convert to a float
        sent_time = msg.stamp.sec + (msg.stamp.nanosec / 1e9)  # convert time to a float
        latency = current_time - sent_time

        self.latencies.append(latency)

        self.count += 1
        if self.count >= self.max_messages:
            self.plot_histogram()
            rclpy.shutdown()

    def plot_histogram(self):
        plt.figure(figsize=(10, 6))
        plt.hist(self.latencies, bins=30, edgecolor='black')
        plt.title("Publish-Subscribe Latency Histogram (400 Messages)")
        plt.xlabel("Latency (seconds)")
        plt.ylabel("Frequency")
        plt.xlim(.0001, .002)
        plt.ylim(0,100)
        plt.grid(True)
        plt.tight_layout()
        plt.show()

def main(args=None):
    rclpy.init(args=args)
    sub = LatencySubscriber()
    rclpy.spin(sub)
    sub.destroy_node()

if __name__ == '__main__':
    main()

