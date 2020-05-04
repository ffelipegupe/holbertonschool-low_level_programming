#!/bin/bash
wget -P /home/vagrant/holberton/holbertonschool-low_level_programming/0x18-dynamic_libraries  https://github.com/ffelipegupe/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/libfoo.so
export LD_PRELOAD=/home/vagrant/holberton/holbertonschool-low_level_programming/0x18-dynamic_libraries/libfoo.so
