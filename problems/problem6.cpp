
#include "../headers/problems.h"
#include <vector>

Problem6::Problem6()
{

}

Problem6::~Problem6()
{

}

bool Problem6::init()
{
	return true;
}

void Problem6::run()
{
	/*
	The sum of the squares of the first ten natural numbers is,

	1^2 + 2^2 + ... + 10^2 = 385
	
	The square of the sum of the first ten natural numbers is,

	(1 + 2 + ... + 10)^2 = 552 = 3025
	Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025  385 = 2640.
	
	Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
	*/

	//method: sum both the squares and the natrual numbers themselves to square later, output the diff

	long double sum = 0;
	long double square = 0;

	for(int i = 1; i <= 100; i++)
	{

		sum += pow(i, (long double)2);

		square += i;

		std::cout << "New sum: " << sum << " New Square: " << square << std::endl;

	}

	square = pow(square, 2);

	long long diff = square - sum;

	std::cout << " Square: " << square << "Sum: " << sum  << " Diff: " << diff << std::endl;

}