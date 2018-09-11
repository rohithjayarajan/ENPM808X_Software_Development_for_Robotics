/**
 *   @brief  stores input stream of words to a vector and also counts
 *   		the number of words in the input and their frequency in
 *   		the input stream
 *
 *   @param  wordsFromInputStream is an uninitialized vector variable
 *   @return the vector of elements which are stored from the input string stream
 */

#ifndef ACCELERATEDC___4_5_INCLUDE_INPUTSTREAMMANIPULATION_HPP_
#define ACCELERATEDC___4_5_INCLUDE_INPUTSTREAMMANIPULATION_HPP_

#include <iostream>
#include <vector>
#include <algorithm>


std::vector<std::string> inputStreamManipulation(std::vector<std::string>& wordsFromInputStream){

	std::string inputStreamElement;	///< string of input stream

	//read the input stream and store them in a vector
	while(std::cin >> inputStreamElement){
	    	wordsFromInputStream.push_back(inputStreamElement);
	    }

	std::sort(wordsFromInputStream.begin(), wordsFromInputStream.end());	//sort the vector in ascending order

	int wordCount = 1;	///< variable to count the frequency of a word in the input stream
	int totalNumberOfUniqueWords = 1;
	std::string tempWord;	///< temporary variable to store a string for further manipulation

	//counts the number of words in the input and number of occurrences for each word
	for (auto& n : wordsFromInputStream){
		if(tempWord.empty()){
			tempWord = n;
		}
		else if (tempWord == n)
		{
			wordCount++;	///< increase frequency count if there is a match between previous word and current word
		}
		else if(tempWord != n){
			std::cout << "The word " << tempWord << " occurred " << wordCount << " times" << std::endl;
			totalNumberOfUniqueWords++;	///< increase count for each unique word detected
			tempWord = n;	///< reset values to analyze next word statistics
			wordCount = 1;	///< reset values to analyze next word statistics
		}
		}
	std::cout << "The word " << tempWord << " occurred " << wordCount << " times" << std::endl;

	std::cout << "Total number of unique words: " << totalNumberOfUniqueWords << std::endl;

	return wordsFromInputStream;
}


#endif /* ACCELERATEDC___4_5_INCLUDE_INPUTSTREAMMANIPULATION_HPP_ */
