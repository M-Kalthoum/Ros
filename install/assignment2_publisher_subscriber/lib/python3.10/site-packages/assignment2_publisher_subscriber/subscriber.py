import rclpy
from rclpy.node import Node


from autominy_msgs.msg import Speed

class SensorsSubscriber(Node):

    def __init__(self):
        super().__init__('sensors_subscriber')
        self.subscription = self.create_subscription(
            Speed,
            '/sensors/speed',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        self.get_logger().info(f"The current speed is {msg.value}m/s")


def main(args=None):
    rclpy.init(args=args)

    sensors_subscriber = SensorsSubscriber()

    rclpy.spin(sensors_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    sensors_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
