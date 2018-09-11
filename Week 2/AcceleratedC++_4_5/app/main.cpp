/**
 *  @file    main.cpp
 *  @author  Rohith Jayarajan (rohithjayarajan)
 *  @date    9/10/2018
 *  @version 1.0
 *
 *  @brief UMD ENPM 808X, Week 2, Accelerated C++ 4-5 (Programming Exercise)
 *
 *  @section DESCRIPTION
 *
 *  This is a program to store an input stream of words to
 *  a vector and also counts the number of words in the
 *  input and the number of times a word occurs in the
 *  input stream
 *
 *	The input stream of words is to be entered by the user
 *	when prompted. Each word in the stream must be followed
 *	by pressing the "Enter" key. After the desired input stream
 *	is entered, an End-of-FIle command is expected which
 *	can be activated by pressing "Ctrl+D"
 *
 *	After the data stream is inputed by the user, the program
 *	prints out the word and  number of times it has occurred
 *	in the stream. It also prints the total number of words
 *	in the stream and returns the vector in which the stream
 *	of words are stored
 *
 */

#include <iostream>
#include <lib.hpp>

#include "inputStreamManipulation.hpp"

int main()
{
    std::cout << "Hello! Please enter the input stream and "
    		"hit enter after each word. Follow the stream by"
    		" an end-of-file to terminate stream." << std::endl;
    std::vector<std::string> wordsFromInputStream;	///< vector of words stored from input stream

    //get the vector of words stored from the input stream
    wordsFromInputStream = inputStreamManipulation(wordsFromInputStream);

    return 0;
}
