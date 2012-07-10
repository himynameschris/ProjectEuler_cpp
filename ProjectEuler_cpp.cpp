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
	std::cout << "Problem 3: What is the largest prime factor of the number 600851475143 ?" << std::endl;
	std::cout << "Problem 4: Find the largest palindrome made from the product of two 3-digit numbers." << std::endl;
	std::cout << "Problem 5: What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?" << std::endl;
	std::cout << "Problem 6: Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum." << std::endl;
	
	int choice;
	std::cin >> choice;

	Problem *o = ProblemFactory::create(choice);
	o->run();

	return 0;
}

