
#include "../headers/problems.h"
#include <vector>

Problem3::Problem3()
{

}

Problem3::~Problem3()
{

}

bool Problem3::init()
{
	return true;
}

void Problem3::run()
{
	//The prime factors of 13195 are 5, 7, 13 and 29.
	//What is the largest prime factor of the number 600851475143 ?

	std::vector<int> prime_factors;

	long long origin = 600851475143;
	long long top = origin;

	for(long long i = 2; i < std::sqrt((float)top); i++)
	{
		//std::cout << "Examining: " << i << std::endl;

		//am i a factor?
		if(origin % i == 0)
		{
			std::cout << "Factor found, is it a prime? " << std::endl;
			
			//yes a factor, is it a prime?
			
			bool prime = true;

			for(long long j = 2; j <= std::sqrt((float)i); j++)
			{
				
				if(i % j == 0)
				{
					std::cout << "Not a prime!" << std::endl;
					//not a prime, set to false
					prime = false;
					break;
				}

			}

			if(prime)
			{
				std::cout << "It's a prime! Pushing back: " << i << std::endl;
				prime_factors.push_back(i);
			}

			std::cout << "Is the inverse a prime? " << std::endl;
			//is the inverse a prime?

			long long inverse = origin / i;

			prime = true;

			for(long long j = 2; j < inverse; j++)
			{
				
				if(i % j == 0)
				{
					std::cout << "Not a prime!" << std::endl;
					//not a prime, set to false
					prime = false;
					break;
				}

			}

			if(prime) 
			{
				std::cout << "It's a prime! Pushing back: " << inverse << std::endl;
				prime_factors.push_back(inverse);
				top = inverse; // limit the iterations
			}
		}

	}

	std::vector<int>::iterator it;

	for(it = prime_factors.begin(); it < prime_factors.end(); it++)
	{
		std::cout << "prime factor: " << (int)*it << std::endl;
	}

}


