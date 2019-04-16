#!/bin/bash

TARGET="calculation"

g++ -c "$TARGET".cpp -o "$TARGET".o
g++ main.cpp "$TARGET".o
