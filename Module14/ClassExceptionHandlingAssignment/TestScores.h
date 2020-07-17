#pragma once
class TestScores
{

private:
	const int SIZE_OF_ARRAY = 11;
	int testScores[];
public:
	TestScores(int []);
	~TestScores();
	// MEMBER FUNCTIONS
	double averageTestScores();
};