cmake_minimum_required(VERSION 3.8)
project(live1288_hw1)

find_package(rosidl_default_generators REQUIRED)
find_package(ament_cmake REQUIRED)
find_package(std_msgs REQUIRED)



rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/Live1288Service.srv"
  DEPENDENCIES std_msgs
)


ament_package()
