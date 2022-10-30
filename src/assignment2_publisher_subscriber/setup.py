from setuptools import setup

package_name = 'assignment2_publisher_subscriber'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='majd',
    maintainer_email='kalthoum_7@outlook.de',
    description='assignment2 publisher subscriber',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'drive = assignment2_publisher_subscriber.publisher:main',
            'currentSpeed = assignment2_publisher_subscriber.subscriber:main',
        ],
    },
)
