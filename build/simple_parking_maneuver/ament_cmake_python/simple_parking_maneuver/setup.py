from setuptools import find_packages
from setuptools import setup

setup(
    name='simple_parking_maneuver',
    version='0.0.1',
    packages=find_packages(
        include=('simple_parking_maneuver', 'simple_parking_maneuver.*')),
)
