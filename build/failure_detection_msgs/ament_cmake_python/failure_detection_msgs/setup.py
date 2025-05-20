from setuptools import find_packages
from setuptools import setup

setup(
    name='failure_detection_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('failure_detection_msgs', 'failure_detection_msgs.*')),
)
