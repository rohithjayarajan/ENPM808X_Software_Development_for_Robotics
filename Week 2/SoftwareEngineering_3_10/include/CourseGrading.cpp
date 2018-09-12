/**
 *  @brief Class member functions for CourseGrading.
 */

#include "CourseGrading.hpp"
#include <iostream>
#include <algorithm>

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
	studentID.push_back(1);
	studentGrade.push_back(60);

	studentID.push_back(2);
	studentGrade.push_back(70);

	studentID.push_back(3);
	studentGrade.push_back(75);

	studentID.push_back(4);
	studentGrade.push_back(80);

	studentID.push_back(5);
	studentGrade.push_back(50);

	studentID.push_back(6);
	studentGrade.push_back(100);

	studentID.push_back(7);
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


	int pos;	///< int variable to find postiion of student in vector according to ID
	// find position of index corresponding to student ID
	pos = find(studentID.begin(), studentID.end(), studentId) - studentID.begin();

	// update grade
	studentGrade[pos] = newCourseGrade;
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
