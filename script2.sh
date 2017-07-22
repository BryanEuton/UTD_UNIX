#!/bin/bash -x
# traverses the directory structure from current directory (recursively, that is, to traverse left-to-right depth-first manner) and (1) to print the current path (with pwd command using system("pwd") call) and (2) to print any file/directory entries 

pwd
ls
cd dir1
pwd
ls
cd dir4
pwd
ls
cd ../../dir2
pwd
ls
cd dir5
pwd
ls
cd ../../dir3
pwd
ls
