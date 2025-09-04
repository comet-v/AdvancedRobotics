import rclpy
from rclpy.node import Node
from live1288_service.srv import Live1288Service
import time

class ReverserService(Node):
    def __init__(self):
        super().__init__('live1288_service_server')
        self.srv = self.create_service(Live1288Service, 'live1288_service', self.handle_request)

    def handle_request(self, request, response):
        start_time = time.time()
        
        reversed_text = request.input[::-1]
        elapsed_time = time.time() - start_time
        response.output = reversed_text
        response.number = elapsed_time

        return response

def main(args=None):
    rclpy.init(args=args)
    node = ReverserService()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
