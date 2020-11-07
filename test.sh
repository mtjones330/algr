#!/bin/bash

./build.sh
./a < in > myout
diff out myout