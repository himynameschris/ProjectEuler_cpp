// ProjectEuler_cpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "problemfactory.h"
#include "problems.h"

int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << "Make a choice: " << std::endl;
	std::cout << "Problem 1: Add all the natural numbers below one thousand that are multiples of 3 or 5." << std::endl;
	std::cout << "Problem 2: By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms." << std::endl;

	int choice;
	std::cin >> choice;

	Problem *o = ProblemFactory::create(choice);
	o->run();

	return 0;
}

