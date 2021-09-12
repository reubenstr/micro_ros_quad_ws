import os
from glob import glob
from setuptools import setup

package_name = 'quad'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        
        (os.path.join('share', package_name), glob('launch/*.launch.py')),
        # (os.path.join('share', package_name, 'config'), glob('config/*.yaml')),      
        (os.path.join('share', package_name, 'urdf'), glob('quad/src/urdf/*.urdf')),
        (os.path.join('share', package_name, 'stl'), glob('quad/src/stl/*.stl')),
        
        (os.path.join('lib', package_name, 'src'), glob('quad/src/*.py')), 
        (os.path.join('lib', package_name, 'stl'), glob('quad/src/stl/*.stl')),
        (os.path.join('lib', package_name, 'urdf'), glob('quad/src/urdf/*.urdf')),
        (os.path.join('lib', package_name, 'urdf'), glob('quad/src/urdf/*.*')),
    
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='devpc',
    maintainer_email='devpc@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'quad = quad.quad:main',
            'motion_servos_calibration = quad.motion_servos_calibration:main'
        ],
    },
)
