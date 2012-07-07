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
	}

	if(p && p->init())
	{
		return p;
	}
	delete p;
	return NULL;

}