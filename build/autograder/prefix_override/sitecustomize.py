import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ros-tutorial/colcon_ws/src/ros-tutorial/install/autograder'
