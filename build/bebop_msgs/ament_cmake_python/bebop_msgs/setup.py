from setuptools import find_packages
from setuptools import setup

setup(
    name='bebop_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('bebop_msgs', 'bebop_msgs.*')),
)
