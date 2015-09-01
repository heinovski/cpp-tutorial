/*
 * chapter002.cpp
 *
 *  Created on: 21.08.2015
 *      Author: Julian
 */

#include <iostream>
using namespace std;

void listing001() {
	cout << "Am I a nerd?" << endl;
}

void listing002() {
	cout << "I like programming\n";
	cout << "A monster with "
		 << "two rows\n";
}

void listing003() {
	int ival = 0; // in C++11 better: int ival(0);
	cout << "Please type in a natural number: ";
	if (cin >> ival)
		cout << "You entered the number " << ival << "\n";
	else
		cerr << "Error while reading the input!\n";
}

void listing004() {

}

//int main () {
	//listing001();
	//listing002();
	//listing003();

	//return 0;
//}
