from setuptools import find_packages
from setuptools import setup

setup(
    name='my_nav_msgs',
    version='0.1.0',
    packages=find_packages(
        include=('my_nav_msgs', 'my_nav_msgs.*')),
)
