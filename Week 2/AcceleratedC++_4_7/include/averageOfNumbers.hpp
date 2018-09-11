/**
 *   @brief  calculated the average of all the numbers stored
 *   		in the vector
 *
 *   @param  numbers is an initialized vector variable of doubles
 *   @return the average of all the numbers in the vector "numbers"
 */

#ifndef ACCELERATEDC___4_7_INCLUDE_AVERAGEOFNUMBERS_HPP_
#define ACCELERATEDC___4_7_INCLUDE_AVERAGEOFNUMBERS_HPP_

#include <vector>

double averageOfNumbers(std::vector<double>& numbers){

	// get the number of elements in the vector
	typedef std::vector<double>::size_type vecSize;
	vecSize size = numbers.size();

	double sumOfNumbers = 0.0;	///< double type variable to store sum of all elements in vector
	for (double& n : numbers){
		sumOfNumbers += n;
	}

	//return the average of the numbers in the vector
	return sumOfNumbers/size;

}



#endif /* ACCELERATEDC___4_7_INCLUDE_AVERAGEOFNUMBERS_HPP_ */
