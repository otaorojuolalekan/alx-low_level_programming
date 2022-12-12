#!/bin/bash
wget -P /temporal/ https://raw.github.com/otaorojuolalekan/alx-low_level_programming/master/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/temporal/nrandom.so
