#include "StdAfx.h"
#include "../problems.h"

Problem1::Problem1()
{

}

Problem1::~Problem1()
{

}

bool Problem1::init()
{
	return true;
}

void Problem1::run()
{
	int sum = 0;

	for(int i = 0; i < 1000; i++)
	{

		if(i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
			std::cout << "Natural number found: " << i << " Running Total: " << sum << std::endl;
		}

	}

	std::cout << "Done! The sum of all natural numbers below 1000 that are multiples of 3 or 5 is: " << sum;

}
