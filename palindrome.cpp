/*
Palindrome Check
*/

#include <algorithm>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

int main() {

// Initalize String
string text;

// Intialize half length
int half_length;

// Intialize Palindrome
bool palindrome;

// User enters string
cout << "Please enter a string:" << endl;
cin >> text;

// Get length of String
int total_length = text.size();

// Get length compatible for arrays, since arrays start at 0 instead of 1
int total_length_for_array = total_length - 1;


// Check if length is even or odd
if((total_length % 2) == 0) {

	// Divide length by 2 to get half length
	half_length = total_length / 2;

} else {

	// Subtract length by 1, then divide length by 2 to get half length
	// (Since we don't have to count the middle character of the string, if we are comparing the first and last half characters together)
	half_length = (total_length - 1) / 2;
}


// Create for loop to check each half of the string
for(int i = 0; i < half_length; i++) {

	// Compare first half and last half characters of the string
	if(text[i] == text[total_length_for_array-i]) {

		// So far it's still a palindrome
		palindrome = true;

	} else {

		// Oof, not a palindrome anymore
		palindrome = false;

		// Break out of the loop, since we know that the string is not a palindrome anymore
		break;

	}

}



// Report to user if the string is a palindrome or not
if(palindrome == true) {

	cout << "The string is a palindrome." << endl;

} else if (palindrome == false) {

	cout << "The string is not a palindrome." << endl;

} else {

	// If program could not determine if the palindrome bool is true or false
	cout << "An error has occurred. We could not determine if the string is a palindrome or not." << endl;

}

// End of program
return 0;

}