/*
 * Course #5375 Principles of Unix
 * Section OW1
 * Class # 53430
 * Professor: Dr. Richard Min
 * 
 * Assignment 1 Part 4 (C/C+= Programming) Command Parser and Tokenizer
 * by Bryan Euton 
 * 
 * This program processes command(s) (to tokenize and parse the command, and print its components correctly) until users enters "exit" to terminate
*/

#include <stdlib.h>
#include <iostream>
#include <string>
#include <sstream>
#include <unistd.h>
int main(void)
{
	std::cout << "Assignment 1 Part 4 by Bryan Euton" << std::endl;
	std::cout << "Enter Unix commands (or \"exit\" to terminate)" << std::endl;
	std::string input = "";
	int cont = 1;
	while(cont == 1){
		std::cout << "\n\nEnter a Unix command" << std::endl;
		getline(std::cin, input);
		std::stringstream iss(input);
		std::string word;
		if(iss >> word){			
			if(word == "exit"){
				cont = 0;
				break;
			}else {
				std::cout << "Command: " << word << std::endl;
				while(iss >> word){
					if(word[0] == '-'){
						std::cout << "Options: " << word << std::endl;
					}else if(word == "<" || word == ">"){
						std::cout << "File Redirection: " << word << std::endl;
						if(iss >> word){
							std::cout << "Command: " << word << std::endl;
						}
					}else if(word == "|"){
						std::cout << "Pipe" << std::endl;
						if(iss >> word){
							std::cout << "Command: " << word << std::endl;
						}
					}else {
						std::size_t x = word.find('.');
						if(word[0] != '.' && x != std::string::npos){
							std::cout << "File: " << word << std::endl;
						}else{
							std::cout << "Argument: " << word << std::endl;
						}
						
					}
				}				
			}
		}
	}
	std::cout << "Goodbye" << std::endl;
	
    exit(0);
}
