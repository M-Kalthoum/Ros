from setuptools import find_packages
from setuptools import setup

setup(
    name='simple_drive_control',
    version='0.0.1',
    packages=find_packages(
        include=('simple_drive_control', 'simple_drive_control.*')),
)
