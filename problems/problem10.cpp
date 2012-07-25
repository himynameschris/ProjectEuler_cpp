
#include "../headers/problems.h"
#include <vector>

Problem10::Problem10()
{

}

Problem10::~Problem10()
{

}

bool Problem10::init()
{
	return true;
}

bool isPrime10(int i)
{

	for(long long j = 2; j <= std::sqrt(float(i)); j++)
	{
				
		if(i % j == 0)
		{
			//std::cout << "Not a prime!" << std::endl;
			//not a prime, set to false
			return false;
		}

	}

	return true;

}

void Problem10::run()
{
	/*
	The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

	Find the sum of all the primes below two million.
	*/

	//method: sum all primes up to 2M using isPrime from problem 7

	long long sum = 0;
	int counter = 2;

	do
	{
		if(isPrime10(counter))
		{
			sum += counter;

			//std::cout << counter << " is a prime, increasing sum to " << sum << std::endl;

		}

		counter++;

	}while(counter < 2000000);

	std::cout << "Sum of primes under " << counter << " is " << sum << std::endl;
	
}