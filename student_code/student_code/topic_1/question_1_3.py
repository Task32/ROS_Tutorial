import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32

# TODO: Q1.3
class TutorialTopic_1_3(Node):
    def __init__(self):
        self.topic_Int32_message = 0
        super().__init__('tutorial_node_q_1_3')
        ### STUDENT CODE HERE
        self.new_topic_publisher = self.create_publisher(
            ### STUDENT CODE HERE
                Int32,
                "/tutorial/counter25",
                10
            ### END STUDENT CODE
        )
        ### END STUDENT CODE
        
        # This calls the function timer_callback every 0.01 second
        self.timer = self.create_timer(0.01, self.timer_callback)
    

    def timer_callback(self):
        ### STUDENT CODE HERE
        if self.topic_Int32_message <= 25:
            new_message = Int32()
            new_message.data = self.topic_Int32_message

            self.new_topic_publisher.publish(new_message)

            self.topic_Int32_message += 1
        ### END STUDENT CODE
        pass

def main(args=None):
    rclpy.init(args=args)
    node = TutorialTopic_1_3()
    rclpy.spin(node)
