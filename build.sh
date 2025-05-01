#!/bin/bash

if [ -f "./main.cpp" ]; then
    echo "main.cpp found."
else
    echo "Cannot find main.cpp. Please change current working directory to the project root directory."
    exit
fi

files=(
    "main.cpp"                          # 0
    "libhostname/hostname.cpp"          # 1
    "configuration/data.cpp"            # 2
    "cmd/cmds.cpp"                      # 3
    "cmd/getmax.cpp"                    # 4
    "cmd/get.cpp"                       # 5
    "cmd/set.cpp"                       # 6
    "cmd/apply.cpp"                     # 7
    "cmd/help.cpp"                      # 8
)

echo "Files:"
echo "${files[*]}"

/usr/bin/g++ --version
/usr/bin/g++ "${files[@]}" \
             -O0 \
             -l "stdc++" \
             -Wall \
             -Wextra \
             -Wnull-dereference \
             -Wdangling-pointer \
             -std=c++23 \
             -static \
             --debug \
             --verbose