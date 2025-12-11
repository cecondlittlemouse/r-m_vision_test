from setuptools import find_packages
from setuptools import setup

setup(
    name='gary_msgs',
    version='0.0.1',
    packages=find_packages(
        include=('gary_msgs', 'gary_msgs.*')),
)
