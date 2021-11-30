/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Muhammad Uzair
 */


#include "std_lib_facilities.h"	

int main()

try
{
	int val = 0;
	cout << "Please enter an integer: ";
	cin >> val;
	if (!cin) error("something went bad with the read");
	string res = "even";
	if (val%2) res = "odd";	

	cout << "The value " << val << " is an " << res << " number\n";

	keep_window_open();	
}
catch (runtime_error e) {	
	cout << e.what() << '\n';
	keep_window_open("~");	
}
