/**
 *  @file    main.cpp
 *  @author  Rohith Jayarajan (rohithjayarajan)
 *  @date    9/10/2018
 *  @version 1.0
 *
 *  @brief UMD ENPM 808X, Week 2, Accelerated C++ 4-7 (Programming Exercise)
 *
 *  @section DESCRIPTION
 *
 *  This is a program to calculate the average of numbers stored
 *  in a vector of type double.
 *
 *  The user is given the choice of entering numbers of double type
 *  of their own to the vector or to use a custom set of numbers
 *  stored in the vector
 *
 *  If user inputs the numbers, they have to be numbers followed by
 *  the "Enter" key and to stop entering numbers the user has to
 *  press "Ctrl+D" to give an End-of-File command.
 *
 */

#include <iostream>
#include <lib.hpp>

#include "averageOfNumbers.hpp"

int main()
{
	std::cout << "********Welcome to the program to calculate"
			" average of numbers********" << std::endl;
	std::cout << "Press 1 to enter numbers by yourself OR "
			"Press 0 to use custom set of numbers." << std::endl;

	bool inputMode = 0;	///< variable to toggle user input/ custom input
	std::cin >> inputMode;
	std::vector<double> numbers;	///< vector of doubles in which the numbers are stored

	if(!inputMode){
		numbers = {1, 2, 3, 4.4, 5.5, 6.7, 8.9, 10.23};	///< custom numbers in vector
	}
	else{
		std::cout << "Enter the numbers (double data type)"
				" followed by the enter key. Press Ctrl+D"
				" to give an End-of-File command to terminate input" << std::endl;

		double tempNumber;	///< temporary variable to store user input
		//storing numbers in the vector
		while(std::cin >> tempNumber){
			numbers.push_back(tempNumber);
		}
	}

	double numbersAverage = 0.0;	///< variable to store average of numbers in a vector
	//get average of numbers in the vector
	numbersAverage = averageOfNumbers(numbers);

	std::cout << "The average of numbers stored in the"
			"vector<double> is: " << numbersAverage;

    return 0;
}
