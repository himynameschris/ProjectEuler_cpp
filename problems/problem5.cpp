#include "StdAfx.h"
#include "../problems.h"
#include <vector>

Problem5::Problem5()
{

}

Problem5::~Problem5()
{

}

bool Problem5::init()
{
	return true;
}

bool divisible(long i)
{
	for(int j = 1; j <= 20; j++)
	{
				
		if(i % j != 0)
		{
			return false;
		}

	}

	return true;
}

void Problem5::run()
{
	//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
	//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

	//method: for loop, starting at 1, multiply starting number by each up to 20 if not %

	long num = 20; 

	do
	{

		num++;

	}while(!divisible(num));

	std::cout << "end: " << num;

}