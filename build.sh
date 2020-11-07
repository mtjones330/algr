#!/bin/bash

if [ "$JUDGE" = "uva" ]
then
  printf "Building for UVa Online...\n\n"
  g++ src/algr.cpp -lm -lcrypt -O2 -std=c++11 -pipe -DONLINE_JUDGE -o a
elif [ "$JUDGE" = "cf" ]
then
  printf "Building for Code Forces...\n\n"
  g++ src/algr.cpp -std=c++17 -Wshadow -Wall -O2 -Wno-unused-result -o a
fi
