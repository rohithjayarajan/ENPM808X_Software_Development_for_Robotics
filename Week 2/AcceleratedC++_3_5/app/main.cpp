/**
 *  @file    main.cpp
 *  @author  Rohith Jayarajan (rohithjayarajan)
 *  @date    9/10/2018
 *  @version 1.0
 *
 *  @brief UMD ENPM 808X, Week 2, Accelerated C++ 3-5 (Programming Exercise)
 *
 *  @section DESCRIPTION
 *
 *  This is a program to keep track of grades for several
 *  students at once.
 *
 *	The full name of the students are stored in one vector
 *	and the grades are stored in another vector. Both the
 *	vectors are in sync and their index corresponds one-to-
 *	one with details of students. The inputs of the grades
 *	for final exam, midterm and homeworks are to be entered
 *	by the user on the command line when prompted.
 *
 *	After the student name and valid grades are entered,
 *	the program outputs the entire entire student
 *	information which consists of the student name as
 *	well as the final grade computed by the formula
 *	(0.2 * midterm) + (0.4 * final) + (0.4 * avgHomework).
 *
 *	The program also asks if the user wants to continue
 *	logging information for a new student.
 *
 */

#include <iostream>
#include <lib.hpp>
#include <vector>

#include "computeFinalGrade.hpp"
#include "computeHomeworkAverage.hpp"

int main()
{
	bool continueLogging = 1;		///< boolean to know stopping condition for logging data
	int studentCount = 0;			///< unique index for accessing student information
	std::vector<std::string> name;	///< full name(first name and last name) of the student
	std::vector<double> finalGrade;	///< final grade for the student

	while(continueLogging){
		// request user to input first and last name and read it
		std::cout << "Please enter your first name: ";
		std::string firstName;	///< first name of the student
		std::cin >> firstName;

		std::cout << "Please enter your last name: ";
		std::string lastName;	///< last name of the student
		std::cin >> lastName;

		name.push_back(firstName + " " + lastName);

		std::cout << "Hello, " << name[studentCount] << "!" << std::endl;

		// request user to input midterm and final grades and read them
		std::cout << "Please enter your midterm and final grades: ";
		double midterm, final;	///< midterm and final exam score for the student
		std::cin >> midterm >> final;

		//request user to input homework grades and read them
		std::cout << "Please enter all your homework grades, "
				"(hit Enter key after each score)"
				"followed by end-of-file (Ctrl+D): ";
		double tempHomework;			///< one homework score for the student
		std::vector<double> homework;	///< vector of homework scores for the student

		//homework contains all homework grades entered by user
		while(std::cin >> tempHomework){
			homework.push_back(tempHomework);
		}
		// check if the student entered at least one homework grades
		typedef std::vector<double>::size_type vecSize;
		vecSize size = homework.size();
		if (size == 0){
			std::cout << std::endl << "You must enter your grades "
					"for at least one homework. "
					"Please try again";
			return 1;
		}
		std::cin.clear();	// clear input buffer to accept user input after end-of-file has been encountered


		double avgHomework = 0.0;	///< average value of the homework scores

		avgHomework = computeHomeworkAverage(homework, size);

		//store the final grade in a vector which is in sync with the vector containing names
		finalGrade.push_back(computeFinalGrade(midterm, final, avgHomework));

		//display entire information of the student
		std::cout << std::endl << "Hi " << name[studentCount] << "!, "
				"your final grade is " << finalGrade[studentCount] << std::endl;
		studentCount++;

		//ask user if more student information needs to be read and logged
		std::cout << "Do you want to continue entering information"
				" for the next student? (enter 1 for YES/ 0 for NO)" << std::endl;

		std::cin >> continueLogging;

		std::cout << std::endl << "********************END**OF**CURRENT**ENTRY****"
				"****************" << std::endl;

	}

	if(!continueLogging){
		std::cout << std::endl << "Thanks for logging data. "
				"This program ends here!" << std::endl;
	}


    return 0;
}
