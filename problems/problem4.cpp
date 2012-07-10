#include "StdAfx.h"
#include "../problems.h"
#include <vector>

Problem4::Problem4()
{

}

Problem4::~Problem4()
{

}

bool Problem4::init()
{
	return true;
}

bool isPalindrome(long n)
{
	std::vector<int> digits;
	
	if (n == 0)
		puts("0");
	else {
		while (n > 0) {
			int digit = n % 10;
			//std::cout << digit;
			digits.push_back(digit);
			n /= 10;
		}

		//std::cout << std::endl;
	
		int length = digits.size();

		bool pal = true;

		for(int i = 0; i < length / 2; i++)
		{
			if(digits.at(i) != digits.at(length - i - 1))
			{
			
				//std::cout << "Digits " << i + 1 << " and " << length - i << " do not match!" << std::endl;
				pal = false;
				break;
			}else
			{
				//std::cout << "Digits " << i + 1 << " and " << length - i << " match!" << std::endl;
			}
		}

		return pal;

	}

	return false;
}

void Problem4::run()
{
	//A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 99.
	//Find the largest palindrome made from the product of two 3-digit numbers.

	//method: start with 999 and 999, decrement first for each iteration of the second down to 100, testing for palindromes in the products

	//std::cout << "Enter a number to test: " << std::endl;
	//long input;
	//std::cin >> input;
	
	//std::vector<long> pals;
	long top = 0;

	for(int i = 999; i >= 100; i--)
	{
		//bool pal = false;

		for(int j = 999; j >= 100; j--)
		{
			
			long product = i * j;

			//std::cout << "product: " << product << std::endl;

			if(isPalindrome(product))
			{
				//std::cout << "yep! : " << product << std::endl;
				if(product > top){
					top = product;
					std::cout << "new top: " << product;
				}

				//pal = true;
				//pals.push_back(product);
				break;
		
			}else
			{
				//std::cout << "nope! : " << product << std::endl;
				//pal = false;
			}
		
		}

		//if(pal) break;

	}

	//std::vector<long>::iterator it;

	//for(it = pals.begin(); it < pals.end(); it++)
	//{
		//std::cout << "palindromes: " << (long)*it << std::endl;
	//}
	
	std::cout << "Final top: " << top << std::endl;
}