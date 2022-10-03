#!/bin/bash
gcc -c *.c
ar rc lilbmy.a *.o
ranlib lilbmy.a
