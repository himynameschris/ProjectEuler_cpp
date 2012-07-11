#include "stdafx.h"
#include "problemfactory.h"
#include "problems.h"

Problem * ProblemFactory::create(int choice)
{
	Problem *p;

	switch(choice)
	{
	case 1:
		p = (Problem *)new Problem1();
	case 2:
		p = (Problem *)new Problem2();
	case 3:
		p = (Problem *)new Problem3();
	case 4:
		p = (Problem *)new Problem4();
	case 5:
		p = (Problem *)new Problem5();
	case 6:
		p = (Problem *)new Problem6();
	case 7:
		p = (Problem *)new Problem7();
	case 8:
		p = (Problem *)new Problem8();
	case 9:
		p = (Problem *)new Problem9();
	}

	if(p && p->init())
	{
		return p;
	}
	delete p;
	return NULL;

}