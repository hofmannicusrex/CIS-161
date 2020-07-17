#include "TestScores.h"

TestScores::TestScores(int testScores[])
{
	this->testScores[SIZE_OF_ARRAY] = testScores[SIZE_OF_ARRAY];
}

TestScores::~TestScores()  // DESTRUCTOR
{ }

double TestScores::averageTestScores()
{
	int sumOfTestScores = 0;
	double averageOfTestScores = 0;

	for (int counter = 0; counter < SIZE_OF_ARRAY; counter++)
	{
		sumOfTestScores += testScores[counter];
	}

	averageOfTestScores = static_cast<double>(sumOfTestScores) / SIZE_OF_ARRAY;

	return averageOfTestScores;
}