#!/bin/bash
wget -P .. https://raw.ggithub.com/Hawa-Hardy/alx-low_level_programming/blob/main/0x18-dynamic_libraries/libtest.so
export LD_PRELOAD ="$PWD/../libtest.so"
