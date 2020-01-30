#include "InsertionSort.h"

void InsertionSort::Sort(vector<string> array)
{

	Show(array);

	std::size_t size = array.size();

	for (int i = 1; i < 5; i++)
	{
		int count = i;

		while (count != 0)
		{
			result = array[count - 1].compare(array[count]);

			if (result > 0)
			{
				string tmp = array[count - 1];
				array[count - 1] = array[count];
				array[count] = tmp;
			}

			count -= 1;

		}
	}

	Show(array);

}

void InsertionSort::Show(vector<string> character_strings)
{
	for (auto i : character_strings)
	{
		std::cout << " " << i << " ";
	}

	std::cout << std::endl;
}