#!/bin/bash
gcc -fPIC -c "$file"
gcc -shared -o libdynamic.so *.o
