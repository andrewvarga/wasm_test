#!/bin/sh

emcc ./buffertest.c -O1 -s WASM=1 -s SIDE_MODULE=1 -o ./buffertest.wasm
sleep 2