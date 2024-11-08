#!/bin/bash
curl https://raw.githubusercontent.com/Kolya142/serpinsky-c1/refs/heads/main/serpinsky1.c > serpinsky1.c
gcc serpinsky1.c -o serpinsky1
./serpinsky1
