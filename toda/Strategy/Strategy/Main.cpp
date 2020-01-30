#include "RandomStrategy.h"

#include <iostream>

int main()
{
	RandomStrategy Random;

	int rand = Random.GetValue();

	std::cout << rand << std::endl;

}