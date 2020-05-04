#!/bin/bash
wget -P /tmp https://github.com/ffelipegupe/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/libfoo.so
export LD_PRELOAD=/tmp/libfoo.so
