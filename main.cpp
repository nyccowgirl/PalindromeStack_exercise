#include <iostream>
#include <string>
#include "studentSolution.hpp"
using namespace std;

bool isPlaindromIterative(string word) {
	int rightSearchIndex = word.length()-1;
	for(int leftSearchIndex=0; leftSearchIndex<rightSearchIndex; leftSearchIndex++, rightSearchIndex--)
		if(word[leftSearchIndex] != word[rightSearchIndex])
			return false;
		
	return true;
}

int main() {
	string testString;

  cout << "Test01: Empty word" << endl;
	testString = "";
  cout << '\t' << testString << " correct answer: " << isPlaindromIterative(testString) << endl;
  cout << '\t' << testString << " student answer: " << isPalindromeStack(testString) << endl;

  cout << "Test02: Odd number palindrome" << endl;
	testString = "racecar";
  cout << '\t' << testString << " correct answer: " << isPlaindromIterative(testString) << endl;
  cout << '\t' << testString << " student answer: " << isPalindromeStack(testString) << endl;

  cout << "Test03: Even number palindrome" << endl;
	testString = "tacoocat";
  cout << '\t' << testString << " correct answer: " << isPlaindromIterative(testString) << endl;
  cout << '\t' << testString << " student answer: " << isPalindromeStack(testString) << endl;

  cout << "Test04: Non Palindrome" << endl;
	testString = "bananaSlug";
  cout << '\t' << testString << " correct answer: " << isPlaindromIterative(testString) << endl;
  cout << '\t' << testString << " student answer: " << isPalindromeStack(testString) << endl;
}