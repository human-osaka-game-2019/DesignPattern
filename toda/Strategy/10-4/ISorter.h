#ifndef ISORTER_H
#define ISORTER_H

#include <string>
#include <vector>

using std::string;
using std::vector;

class ISorter
{
public:

	virtual void Sort(vector<string> array) = 0;

};

#endif
