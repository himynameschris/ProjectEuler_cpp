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

class Problem2 : public Problem
{
public:
	Problem2();
	~Problem2();

	virtual bool init();
	virtual void run();

};

class Problem3 : public Problem
{
public:
	Problem3();
	~Problem3();

	virtual bool init();
	virtual void run();

};

class Problem4 : public Problem
{
public:
	Problem4();
	~Problem4();

	virtual bool init();
	virtual void run();

};

class Problem5 : public Problem
{
public:
	Problem5();
	~Problem5();

	virtual bool init();
	virtual void run();

};

class Problem6 : public Problem
{
public:
	Problem6();
	~Problem6();

	virtual bool init();
	virtual void run();

};

class Problem7 : public Problem
{
public:
	Problem7();
	~Problem7();

	virtual bool init();
	virtual void run();

};

class Problem8 : public Problem
{
public:
	Problem8();
	~Problem8();

	virtual bool init();
	virtual void run();

};

class Problem9 : public Problem
{
public:
	Problem9();
	~Problem9();

	virtual bool init();
	virtual void run();

};

class Problem10 : public Problem
{
public:
	Problem10();
	~Problem10();

	virtual bool init();
	virtual void run();

};

class Problem11 : public Problem
{
public:
	Problem11();
	~Problem11();

	virtual bool init();
	virtual void run();

};

class Problem12 : public Problem
{
public:
	Problem12();
	~Problem12();

	virtual bool init();
	virtual void run();

};

#endif // PROBLEMS_H