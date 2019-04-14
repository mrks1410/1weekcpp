#!/bin/bash

g++ -c sample.cpp -o sample.o
g++ main.cpp sample.o
