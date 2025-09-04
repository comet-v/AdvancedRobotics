from setuptools import find_packages
from setuptools import setup

setup(
    name='live1288_service',
    version='0.0.0',
    packages=find_packages(
        include=('live1288_service', 'live1288_service.*')),
)
