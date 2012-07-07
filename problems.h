#ifndef PROBLEMS_H
#define PROBLEMS_H

#include "stdafx.h"

class Problem
{
public:

	virtual bool init() = 0;
	virtual void run() = 0;

};

class Problem1 : public Problem
{
public:
	Problem1();
	~Problem1();

	virtual bool init();
	virtual void run();

};

#endif // PROBLEMS_H