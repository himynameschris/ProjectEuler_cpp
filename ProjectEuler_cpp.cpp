// ProjectEuler_cpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "problemfactory.h"
#include "problems.h"
#include <time.h>

int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << std::endl << std::endl;
	std::cout << "////////////////////////////////////////////////////////////////////////////////" << std::endl;
	std::cout << "Make a choice: " << std::endl << std::endl;
	std::cout << "Problem 1: " << std::endl << "Add all the natural numbers below one thousand that are multiples of 3 or 5." << std::endl << std::endl;
	std::cout << "Problem 2: " << std::endl << "By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms." << std::endl << std::endl;
	std::cout << "Problem 3: " << std::endl << "What is the largest prime factor of the number 600851475143 ?" << std::endl << std::endl;
	std::cout << "Problem 4: " << std::endl << "Find the largest palindrome made from the product of two 3-digit numbers." << std::endl << std::endl;
	std::cout << "Problem 5: " << std::endl << "What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?" << std::endl << std::endl;
	std::cout << "Problem 6: " << std::endl << "Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum." << std::endl << std::endl;
	std::cout << "Problem 7: " << std::endl << "What is the 10 001st prime number?" << std::endl << std::endl;
	std::cout << "Problem 8: " << std::endl << "Find the greatest product of five consecutive digits in the 1000-digit number." << std::endl << std::endl;
	std::cout << "Problem 9: " << std::endl << "There exists exactly one Pythagorean triplet for which a + b + c = 1000. Find the product abc." << std::endl << std::endl;
	std::cout << "Problem 10: " << std::endl << "Find the sum of all the primes below two million." << std::endl << std::endl;
	std::cout << "Problem 11: " << std::endl << "What is the greatest product of four adjacent numbers in any direction (up, down, left, right, or diagonally) in the 2020 grid?" << std::endl << std::endl;
	std::cout << "////////////////////////////////////////////////////////////////////////////////" << std::endl;

	int choice;
	std::cin >> choice;

	clock_t start, end;
	start = clock();

	Problem *o = ProblemFactory::create(choice);
	o->run();

	end = clock();

	double runTime = (end - start) / (double) CLOCKS_PER_SEC;

	std::cout << "Finished in " << runTime << " seconds!" << std::endl;

	return 0;
}

