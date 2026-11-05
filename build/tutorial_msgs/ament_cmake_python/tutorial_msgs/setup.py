from setuptools import find_packages
from setuptools import setup

setup(
    name='tutorial_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('tutorial_msgs', 'tutorial_msgs.*')),
)
