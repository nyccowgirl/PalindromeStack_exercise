#ifndef STUDENT_SOLUTION_CPP
#define STUDENT_SOLUTION_CPP
#include <stack>
#include <string>
#include "studentSolution.hpp"

bool isPalindromeStack(std::string word) {
	int length = word.length();
    int mid = length / 2;
    std::stack <char> s;

    for (int i = 0; i < length; i++) { 
        if (i < mid) {          // Traverse halfway
            // Put character in stack - case insensitive
            s.push(tolower(word.at(i))); 

            if ((length % 2 != 0) && ((i + 1) == mid)) {
                // If odd number string, skip middle character
                i++;            
            }
        } else {
            // For remaining characters, compare with top 
            // character in stack - case insensitive
            if (tolower(word.at(i)) == s.top()) {
                s.pop();
            } else {
                return false;
            }
        }
    }

	return true;
}
#endif /* STUDENT_SOLUTION_CPP */