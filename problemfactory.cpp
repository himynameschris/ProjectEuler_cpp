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
	}

	if(p && p->init())
	{
		return p;
	}
	delete p;
	return NULL;

}