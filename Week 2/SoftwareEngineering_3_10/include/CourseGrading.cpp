/**
 *  @brief Class member functions for CourseGrading.
 */

#include "CourseGrading.hpp"
#include <iostream>

/**
 *   @brief Default constructor for CourseGrading
 *   		Information for 7 students are created with
 *   		course grades
 *
 *   @param nothing
 *   @return nothing
 */
CourseGrading::CourseGrading() {
	// created vector with course grades for 7 students
	studentGrade.push_back(60);
	studentGrade.push_back(70);
	studentGrade.push_back(75);
	studentGrade.push_back(80);
	studentGrade.push_back(50);
	studentGrade.push_back(100);
	studentGrade.push_back(65);
}

/**
 *   @brief Default constructor for CourseGrading
 *
 *   @param nothing
 *   @return nothing
 */
CourseGrading::~CourseGrading() {
	// TODO Auto-generated destructor stub
}

/**
 *   @brief function to change student grade
 *
 *   @param studentId is an int representing the studentID
 *   		whose grade is to be changed
 *   @param newCourseGrade is a double value representing
 *   		the new grade to be updated for the student
 *   @return nothing
 */
void CourseGrading::changeStudentGrade(int& studentId, double& newCourseGrade) {

	studentGrade[studentId] = newCourseGrade;
}

/**
 *   @brief function to compute average grade point average
 *
 *   @param nothing
 *   @return double type value of the average of grade point average
 */
double CourseGrading::computeGradePointAverage() {

	// get the number of elements in the vector
	typedef std::vector<double>::size_type vecSize;
	vecSize size = studentGrade.size();

	double sumOfNumbers = 0.0;	///< double type variable to store sum of all elements in vector
	for (double& n : studentGrade){
		sumOfNumbers += n;
	}

	//return the average of the numbers in the vector
	return sumOfNumbers/size;
}
