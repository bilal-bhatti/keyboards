#!/bin/sh

make clean && make KEYMAP=spacefn && DEV=/dev/cu.usbmodem5d11 make program

