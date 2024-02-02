#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Hawa-Hardy/alx-low_level_programming/main/0x18-dynamic_libraries/libtest.so
export LD_PRELOAD ="$PWD/../libtest.so"
