from setuptools import find_packages
from setuptools import setup

setup(
    name='ar_track_alvar_msgs',
    version='0.7.1',
    packages=find_packages(
        include=('ar_track_alvar_msgs', 'ar_track_alvar_msgs.*')),
)
