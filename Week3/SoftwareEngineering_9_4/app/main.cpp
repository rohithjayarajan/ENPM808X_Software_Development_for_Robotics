/**
 *  Copyright 2018 rohith jayarajan
 *  @file    main.cpp
 *  @author  Rohith Jayarajan (rohithjayarajan)
 *  @date    9/17/2018
 *  @version 1.0
 *
 *  @brief UMD ENPM 808X, Week 3, Software Engineering 9-4 (Programming Exercise)
 *
 *  @section DESCRIPTION
 *
 *  This is a program that prints the position of the 
 * 	beginning of a given string in a given text
 *
 *	The text and the string to be searched for in the 
 *	text are given to the program as input by initializing them.
 *
 */

#include <iostream>
#include <vector>
#include <string>

void printPosition();
std::size_t findPosition(const std::string& text,
                         const std::string& array_to_search1);

int main() {
  printPosition();

  return 0;
}

/**
 *   @brief  prints the position of the where the string to be searched
 * 			 has been found in the given text
 *
 *   @param  none
 *   @return void
 */

void printPosition() {
  const std::string text = "1234567890";  ///< initialize string text
  const std::string array_to_search1 = "23";  ///< initialize the sub
                                              ///< string to be searched

  //  get position at which substring was found
  std::size_t position1 = findPosition(text, array_to_search1);
  if (position1 == std::string::npos) {
    std::cout << "Sub string not found in text string" << std::endl;
  } else {
  std::cout << "The index at which the substring was found: " << position1
            << std::endl;
  }
}

/**
 *   @brief  stores input stream of words to a vector and also counts
 *   		the number of words in the input and their frequency in
 *   		the input stream
 *
 *   @param  text is the string in which a sub-string has to be searched for
 * 			 array_to_search1 is the sub-string that is searched for in string text
 * 
 *   @return the position of type std::size_t at which the string has been found 
 * 			 in the text
 */

std::size_t findPosition(const std::string& text,
                         const std::string& array_to_search1) {
  std::size_t position = text.find(array_to_search1);
  return position;
}
