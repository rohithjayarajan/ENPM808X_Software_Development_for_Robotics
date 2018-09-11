/**
 *  @file    main.cpp
 *  @author  Rohith Jayarajan (rohithjayarajan)
 *  @date    9/10/2018
 *  @version 1.0
 *
 *  @brief UMD ENPM 808X, Week 2, Software Engineering 3-10 (Programming Exercise)
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

#include "CourseGrading.cpp"

int main()
{
	// create object of the class CourseGrading
	CourseGrading roboticsClass;

	double roboticsClassGPA = 0.0;	///< initialize the average grade pointer of class

	// compute the grade point average for the roboticsClass object
	roboticsClassGPA = roboticsClass.computeGradePointAverage();
	std::cout << "The grade point average for the class is: " <<  roboticsClassGPA << std::endl;

	int studentIdVal = 4;	///< initialize the ID of the student whose grade needs to be changed
	double newCourseGradeVal = 20.8;	///< initialize the value of grade to be changed to

	// change the grade of student
	roboticsClass.changeStudentGrade(studentIdVal, newCourseGradeVal);

	// compute new average grade point of class
	roboticsClassGPA = roboticsClass.computeGradePointAverage();
	std::cout << "The grade point average for the class"
			" after changing grade of student with ID 4 to 20.8"
			" from 50 is: " <<  roboticsClassGPA << std::endl;
	return 0;
}
