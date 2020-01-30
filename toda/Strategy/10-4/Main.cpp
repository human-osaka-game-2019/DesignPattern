#include <string>
#include <vector>
#include <iostream>


#include "InsertionSort.h"

using std::string;
using std::vector;



int main()
{
	vector<string> character_strings = {"b","a","d","e","c"};

	InsertionSort Sort;

	Sort.Sort(character_strings);

}