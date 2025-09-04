import rclpy
from rclpy.node import Node
from live1288_hw1.srv import Live1288Service
import time

class ReverserService(Node):
    def __init__(self):
        super().__init__('live1288_service_server')
        self.srv = self.create_service(Live1288Service, 'live1288_service', self.handle_request)
        self.get_logger().info('Service server ready.')

    def handle_request(self, request, response):
        start = time.time()
        reversed_text = request.input[::-1]
        elapsed = time.time() - start
        response.output = reversed_text
        response.number = elapsed
        self.get_logger().info(f"Handled request: '{request.input}' -> '{response.output}' in {elapsed:.6f}s")
        return response

def main(args=None):
    rclpy.init(args=args)
    node = ReverserService()
    rclpy.spin(node)
    rclpy.shutdown()

