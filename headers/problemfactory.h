#ifndef PROBLEMFACTORY_H
#define PROBLEMFACTORY_H

class Problem;

class ProblemFactory
{
public:
	ProblemFactory();
	~ProblemFactory();

	static Problem * create(int choice);

};

#endif // PROBLEMFACTORY_H