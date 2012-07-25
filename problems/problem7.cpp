
#include "../headers/problems.h"
#include <vector>

Problem7::Problem7()
{

}

Problem7::~Problem7()
{

}

bool Problem7::init()
{
	return true;
}

bool isPrime(int i)
{

	for(long long j = 2; j <= sqrt((float)i); j++)
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

void Problem7::run()
{
	/*
	By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

	What is the 10 001st prime number?
	*/

	//method: 

	int counter = 0;
	int prime = 1;

	do
	{

		prime++;

		//std::cout << "Examining: " << prime << std::endl;

		if(isPrime(prime))
		{
			counter++;

			//std::cout << prime << " is a prime, incrementing counter to " << counter << std::endl;

		}

	}while(counter < 10001);

	std::cout << "Prime #" << counter << " = " << prime;
	
}