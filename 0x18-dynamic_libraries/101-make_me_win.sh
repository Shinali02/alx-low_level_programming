#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Shinali02/alx-low_level_programming/main/0x18-dynamic_libraries/libhack.so
export LD_PRELOAD="$PWD/../libhack.so"
