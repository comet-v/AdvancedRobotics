from setuptools import find_packages, setup
from glob import glob
import os

package_name = 'live1288_hw1'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='lisvent',
    maintainer_email='lisvent@todo.todo',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'service_server = live1288_hw1.service_server:main',
            'service_client = live1288_hw1.service_client:main',
            'publisher = live1288_hw1.publisher:main',
            'subscriber = live1288_hw1.subscriber:main',
        ],
    },
)
