import rclpy
from rclpy.node import Node
from live1288_service.srv import Live1288Service
import time
import matplotlib.pyplot as plt

class ReverserClient(Node):
    # constructor
    def __init__(self):
        super().__init__('live1288_service_client')
        self.cli = self.create_client(Live1288Service, 'live1288_service')
        self.req = Live1288Service.Request() # the request object

    def send_request(self, input_text):
        self.req.input = input_text
        future = self.cli.call_async(self.req) #send request
        rclpy.spin_until_future_complete(self, future) #wait for it to be completed
        return future.result()

def main(args=None):
    rclpy.init(args=args)
    client = ReverserClient()
    
    latencies = []
    
    
    for i in range(40000):
    	input_text = "Hello World, this is a test string!"
    	print ("requesting " + str(i))
    	start_time = time.time()
    	response = client.send_request(input_text)
    	
    	end_time = time.time()
    	total_time = end_time - start_time
    	service_time = response.number
    	
    	latency = total_time - service_time
    	latencies.append(latency)


    #plot time
    plt.figure(figsize=(10, 6))
    plt.hist(latencies, bins=30, edgecolor='black')
    plt.title('Client-Server Histogram of Data Transfer Latency (400 Calls)')
    plt.xlabel('Latency (seconds)')
    plt.ylabel('Frequency')
#    plt.xlim(.0001,.002)
#    plt.ylim(0, 100)
    plt.grid(True)
    plt.tight_layout()
    plt.show()
    
    rclpy.shutdown()

if __name__ == '__main__':
    main()
