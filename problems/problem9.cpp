#include "../headers/problems.h"

Problem9::Problem9()
{

}

Problem9::~Problem9()
{

}

bool Problem9::init()
{
	return true;
}

void Problem9::run()
{
	/*
	A Pythagorean triplet is a set of three natural numbers, a  b  c, for which,

	a2 + b2 = c2
	For example, 32 + 42 = 9 + 16 = 25 = 52.

	There exists exactly one Pythagorean triplet for which a + b + c = 1000.
	Find the product abc.
	*/

	//method: use 2 nested for loops to iterate through euclid's formula
	//a = pow(m, 2) - pow(n,2), b = 2mn, c = pow(m,2) + pow(n,2)

	for(double m = 0; m < 100; m++)
	{

		for(double n = 0; n < m; n++)
		{

			std::cout << "m:" << m << " n:" << n << std::endl;

			double a = std::pow(m, 2) - std::pow(n,2);
			double b = 2 * m * n;
			double c = pow(m,2) + pow(n,2);
			
			if(a + b + c == 1000)
			{
				std::cout << " Found! a = " << a << " b = " << b << " c = " << c << std::endl;
				std::cout << " Product: " << (long)(a * b * c) << std::endl;
				return;
			}

		}
	}

}
