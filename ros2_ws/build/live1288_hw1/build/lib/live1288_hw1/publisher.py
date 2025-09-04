import rclpy
from rclpy.node import Node
from std_msgs.msg import Header
import time

class LatencyPublisher(Node):

    # constructor
    def __init__(self):
        super().__init__('latency_publisher') #the name of the publisher
        self.publisher_ = self.create_publisher(Header, 'latency_topic', 10) #header from std_msgs
        
        # to publish the messages every .01 seconds (should this be longer?)
        self.timer = self.create_timer(0.01, self.timer_function)
        
        #how many messages sent
        self.count = 0 
        self.max_count = 400 

    def timer_function(self):
        if self.count >= self.max_count:
            # stop sending messages
            self.destroy_timer(self.timer)
            return

        msg = Header()
        current_time = self.get_clock().now().to_msg()
        msg.stamp = current_time
        msg.frame_id = "message number " + str(self.count)
        
        self.publisher_.publish(msg)
        self.count += 1

def main(args=None):
    rclpy.init(args=args)
    pub = LatencyPublisher()
    rclpy.spin(pub)
    pub.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

