/**
 *  @file    main.cpp
 *  @author  Rohith Jayarajan (rohithjayarajan)
 *  @date    9/10/2018
 *  @version 1.0
 *
 *  @brief UMD ENPM 808X, Week 2, Accelerated C++ 6-9 (Programming Exercise)
 *
 *  @section DESCRIPTION
 *
 *  This is a program to concatenate all the elements stored
 *  in a vector of strings.
 *
 *  The user is expected to enter strings of their own as input
 *  which is stored in the vector of strings.
 *
 *  The strings entered have to be followed by the "Enter" key
 *  and to stop entering strings the user has to press "Ctrl+D"
 *  to give an End-of-File command.
 *
 *  The program then outputs the concatenated string of vector elements
 *
 */

#include <iostream>
#include <lib.hpp>

#include <string>
#include <vector>
#include <numeric>

int main()
{
	std::vector<std::string> words;	///< vector of strings in which the elements are stored

	std::cout << "Enter the strings"
					" followed by the enter key. Press Ctrl+D"
					" to give an End-of-File command to terminate input" << std::endl;

	std::string tempElement;	///< temporary variable to store user input
	//storing strings in the vector
	while(std::cin >> tempElement){
		words.push_back(tempElement);
	}
	//concatenating elements of vector of strings
	std::string concatenatedElement = std::accumulate(words.begin(), words.end(), std::string(""));

	std::cout << concatenatedElement << std::endl;

    return 0;
}
