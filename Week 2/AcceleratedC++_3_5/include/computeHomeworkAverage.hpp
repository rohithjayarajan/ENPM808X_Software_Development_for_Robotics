/**
 *   @brief  computes the average of "n" homework scores/grades
 *
 *   @param  homework is an initialized vector variable
 *   @param  size is an initialized vector<double>::size_type variable
 *   @return average of the homeworks as a double
 */

#ifndef ACCELERATEDC___3_5_INCLUDE_COMPUTEHOMEWORKAVERAGE_HPP_
#define ACCELERATEDC___3_5_INCLUDE_COMPUTEHOMEWORKAVERAGE_HPP_

double computeHomeworkAverage(std::vector<double>& homework, std::vector<double>::size_type& size){

	double homeworkSum = 0.0;		///< initializing the sum of homework scores to 0.0

	//compute the sum of all homework scores
	for (double& n : homework){
		homeworkSum += n;
	}

	//return the average of the homework scores
	return homeworkSum/size;
}



#endif /* ACCELERATEDC___3_5_INCLUDE_COMPUTEHOMEWORKAVERAGE_HPP_ */
