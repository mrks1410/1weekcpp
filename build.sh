#!/bin/bash

TARGET="car"

g++ -c "$TARGET".cpp -o "$TARGET".o
g++ main.cpp "$TARGET".o
