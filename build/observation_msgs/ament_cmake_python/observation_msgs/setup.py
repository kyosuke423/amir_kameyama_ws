from setuptools import find_packages
from setuptools import setup

setup(
    name='observation_msgs',
    version='0.1.0',
    packages=find_packages(
        include=('observation_msgs', 'observation_msgs.*')),
)
