import rclpy
from rclpy.node import Node


from autominy_msgs.msg import NormalizedSteeringCommand
from autominy_msgs.msg import SpeedCommand

class ActuatorsPublisher(Node):

    def __init__(self):
        super().__init__('actuators_publisher')
        self.publisher_steering = self.create_publisher(NormalizedSteeringCommand, '/actuators/steering_normalized',10)
        self.publisher_speed = self.create_publisher(SpeedCommand, '/actuators/speed',10)
        self.timer = self.create_timer(0.5, self.timer_callback)

    def timer_callback(self):
        msg_steering = NormalizedSteeringCommand()
        msg_steering.value = 1.0 
        self.publisher_steering.publish(msg_steering)
        self.get_logger().info(f"published steering value of {msg_steering.value}")
        msg_speed = SpeedCommand()
        msg_speed.value = 0.3 
        self.publisher_speed.publish(msg_speed)
        self.get_logger().info(f"published speed of {msg_speed.value}m/s")


def main(args=None):
    rclpy.init(args=args)

    actuators_publisher = ActuatorsPublisher()

    rclpy.spin(actuators_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    actuators_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

