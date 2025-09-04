import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/lisvent/ros2_ws/src/live1288_hw1/install/live1288_hw1'
