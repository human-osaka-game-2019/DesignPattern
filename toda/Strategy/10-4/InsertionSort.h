#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

#include "ISorter.h"

#include <string>
#include <vector> 
#include <iostream>

using std::string;
using std::vector;

class InsertionSort : public ISorter
{
public:

	void Sort(vector<string> array);

private:

	void Show(vector<string> character_strings);

	int result = 0;
};

#endif
