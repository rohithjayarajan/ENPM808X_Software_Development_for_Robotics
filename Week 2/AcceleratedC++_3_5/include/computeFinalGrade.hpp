/**
 *   @brief  Computes the final grade given the scores of midterm, final and avgHomework
 *   scores.
 *
 *   @param  midterm is an initialized double variable
 *   @param  final is an initialized double variable
 *   @param  avgHomework is an initialized double variable
 *   @return final grade computed by the below given formula as a double
 *   		 (0.2 * midterm) + (0.4 * final) + (0.4 * avgHomework)
 */

#ifndef ACCELERATEDC___3_5_INCLUDE_COMPUTEFINALGRADE_HPP_
#define ACCELERATEDC___3_5_INCLUDE_COMPUTEFINALGRADE_HPP_


double computeFinalGrade(double& midterm, double& final, double& avgHomework){

	//returns the final grade computed from the formula mentioned above
	//in the return decription
	return ((0.2 * midterm) + (0.4 * final) + (0.4 * avgHomework));
}


#endif /* ACCELERATEDC___3_5_INCLUDE_COMPUTEFINALGRADE_HPP_ */
