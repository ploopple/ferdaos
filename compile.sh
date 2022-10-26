#!/bin/bash

echo "Clearing the terminal"
clear

if [ ! -d dist ]; then
    echo "folder dist does not exist, create the folder"
    mkdir dist
fi

echo "Compiling using clang++ and output it in dist/Main "
clang++ -Weverything -Wno-poison-system-directories src/Main.cpp -o dist/Main

if [[ $? = 0 ]]; then
    echo "Run the Main file in dist/Main"
    ./dist/Main examples/main.frds
fi