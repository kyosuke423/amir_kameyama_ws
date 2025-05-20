from setuptools import find_packages
from setuptools import setup

setup(
    name='line_msg',
    version='0.0.0',
    packages=find_packages(
        include=('line_msg', 'line_msg.*')),
)
