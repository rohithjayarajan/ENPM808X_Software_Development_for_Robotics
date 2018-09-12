/**
 *  @brief Class that supports course grading.
 */

#ifndef SOFTWAREENGINEERING_3_10_INCLUDE_COURSEGRADING_HPP_
#define SOFTWAREENGINEERING_3_10_INCLUDE_COURSEGRADING_HPP_

#include<vector>

class CourseGrading {
public:
	//class constructor
	CourseGrading();

	// class destructor
	virtual ~CourseGrading();

	// change grade of student with ID "studentId" to new grade "newCourseGrade"
	void changeStudentGrade(int& studentId, double& newCourseGrade);

	// compute the grade point average for the class
	double computeGradePointAverage();
private:
	std::vector<double> studentGrade;	///< vector of student grades
	std::vector<double> studentID;		///< vector of student IDs
};

#endif /* SOFTWAREENGINEERING_3_10_INCLUDE_COURSEGRADING_HPP_ */
