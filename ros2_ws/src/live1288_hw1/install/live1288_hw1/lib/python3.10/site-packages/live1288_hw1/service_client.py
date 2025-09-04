import rclpy
from rclpy.node import Node
from live1288_hw1.srv import Live1288Service

class ReverserClient(Node):
    def __init__(self):
        super().__init__('live1288_service_client')
        self.cli = self.create_client(Live1288Service, 'Live1288-service')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for service...')
        self.req = Live1288Service.Request()

    def send_request(self, input_text):
        self.req.input = input_text
        future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, future)
        return future.result()

def main(args=None):
    rclpy.init(args=args)
    client = ReverserClient()
    input_text = "Hello ROS 2"
    response = client.send_request(input_text)
    client.get_logger().info(f"Input: {input_text}")
    client.get_logger().info(f"Reversed: {response.output}")
    client.get_logger().info(f"Elapsed time: {response.number:.6f} seconds")
    rclpy.shutdown()

