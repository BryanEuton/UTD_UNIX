/*
 * Course #5375 Principles of Unix
 * Section OW1
 * Class # 53430
 * Professor: Dr. Richard Min
 * 
 * Assignment 1 Part 3 (C/C+= Programming) using system function call to execute shell command.
 * by Bryan Euton 
 * 
 * Task #1
 * This program will create a few desinated files and directories as described in the assignment.
 *
 * Task #2
 * Traverse the directory structure from current directory (recursively, that is, to traverse left-to-right depth-first manner) and 
 *   (1) to print the current path (with pwd command using system("pwd") call) and 
 *   (2) to print any file/directory entries (with ls command, using system("ls") call). 
*/

#include <stdlib.h>
#include <iostream>
#include <unistd.h>
int main(void)
{
	std::cout << "Assignment 1 Part 3 by Bryan Euton" << std::endl;
	std::cout << "Task #1 Create a few directories and files." << std::endl;
	std::cout << "Creating dir1" << std::endl;
    system("mkdir dir1");
	std::cout << "Creating dir4" << std::endl;
    system("mkdir dir1/dir4");
	std::cout << "Creating file4" << std::endl;
    system("touch dir1/dir4/file4");
	std::cout << "Creating dir2" << std::endl;
    system("mkdir dir2");
	std::cout << "Creating dir5" << std::endl;
    system("mkdir dir2/dir5");
	std::cout << "Creating link1" << std::endl;
    system("ln -s dir3/file3 dir2/dir5/link1");
	std::cout << "Creating dir3" << std::endl;
    system("mkdir dir3");
	std::cout << "Creating file4" << std::endl;
    system("touch dir3/file3");
	std::cout << "Creating file1" << std::endl;
    system("touch file1");
	std::cout << "Creating file2" << std::endl;
    system("touch file2");
    
	std::cout << "Task #2 Traverse the directory structure, print currentpath, and print all files/directories" << std::endl;
	std::cout << "+ pwd" << std::endl;
	system("pwd");
	std::cout << "+ ls" << std::endl;
	system("ls");
	std::cout << "+ cd dir1" << std::endl;
	chdir("dir1");
	std::cout << "+ pwd" << std::endl;
	system("pwd");
	std::cout << "+ ls" << std::endl;
	system("ls");
	std::cout << "+ cd dir4" << std::endl;
	chdir("dir4");
	std::cout << "+ pwd" << std::endl;
	system("pwd");
	std::cout << "+ ls" << std::endl;
	system("ls");
	std::cout << "+ cd ../../dir2" << std::endl;
	chdir("../../dir2");
	std::cout << "+ pwd" << std::endl;
	system("pwd");
	std::cout << "+ ls" << std::endl;
	system("ls");
	std::cout << "+ cd dir5" << std::endl;
	chdir("dir5");
	std::cout << "+ pwd" << std::endl;
	system("pwd");
	std::cout << "+ ls" << std::endl;
	system("ls");
	std::cout << "+ cd ../../dir3" << std::endl;
	chdir("../../dir3");
	std::cout << "+ pwd" << std::endl;
	system("pwd");
	std::cout << "+ ls" << std::endl;
	system("ls");
	
    exit(0);
}
