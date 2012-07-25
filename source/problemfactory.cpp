
#include "../headers/problemfactory.h"
#include "../headers/problems.h"

Problem * ProblemFactory::create(int choice)
{
	Problem *p;

	switch(choice)
	{
	case 1:
		p = (Problem *)new Problem1();
		break;
	case 2:
		p = (Problem *)new Problem2();
		break;
	case 3:
		p = (Problem *)new Problem3();
		break;
	case 4:
		p = (Problem *)new Problem4();
		break;
	case 5:
		p = (Problem *)new Problem5();
		break;
	case 6:
		p = (Problem *)new Problem6();
		break;
	case 7:
		p = (Problem *)new Problem7();
		break;
	case 8:
		p = (Problem *)new Problem8();
		break;
	case 9:
		p = (Problem *)new Problem9();
		break;
	case 10:
		p = (Problem *)new Problem10();
		break;
	case 11:
		p = (Problem *)new Problem11();
		break;
	case 12:
		p = (Problem *)new Problem12();
		break;
	case 13:
		p = (Problem *)new Problem13();
		break;
	}

	if(p && p->init())
	{
		return p;
	}
	delete p;
	return NULL;

}