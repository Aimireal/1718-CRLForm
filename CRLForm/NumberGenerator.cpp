#include "NumberGenerator.h"
#include <iostream>
#include <ctime> 
using namespace std;



NumberGenerator::NumberGenerator()
{
	srand((unsigned)time(0));
	int i;
	i = (rand() % 1000) + 1;
	cout << i << "\n";
}


NumberGenerator::~NumberGenerator()
{
}
