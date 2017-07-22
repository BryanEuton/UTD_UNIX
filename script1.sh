#!/bin/bash -x
# Creates directories and files as described by Assignment 1 Part 2
mkdir dir1
mkdir dir1/dir4
touch dir1/dir4/file4
mkdir dir2
mkdir dir2/dir5
ln -s dir3/file3 dir2/dir5/link1
mkdir dir3
touch dir3/file3
touch file1
touch file2
