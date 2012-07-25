
#include "../headers/problems.h"

Problem2::Problem2()
{

}

Problem2::~Problem2()
{

}

bool Problem2::init()
{
	return true;
}

void Problem2::run()
{
	long first = 0;
	long second = 1;
	long sum = 0;

	do
	{

		int tmp = first + second;

		if(tmp % 2 == 0)
		{
			sum += tmp;
		}

		first = second;
		second = tmp;

	}while(first + second <= 4000000);

	std::cout << "done! the sum of the even numbers in the fibonnaci sequence under 4M is: " << sum << std::endl;

}
