import rospy
import std_msgs

pub = rospy.Publisher("led_control", std_msgs.msg.Int8, queue_size=2)
rospy.init_node('led_controller')

while not rospy.is_shutdown():
    user_input = int(raw_input("Give me a number: "))
    pub.publish(user_input)
