#include <iostream> 
#include <algorithm>
#include <utility>
 
int main()
{
	const int length(9);
	int array[length] = { 7, 5, 6, 4, 9, 8, 2, 1, 3 };


	for (int x = 0; x < length - 1; ++x)
	{
		int endOfIteration(length - x);

		bool swapped = false;

		for (int index = 0; index < endOfIteration - 1; ++index)
		{
			if (array[index] > array[index + 1]) 
			{
				std::swap(array[index], array[index + 1]);
				swapped = true;
			}
		}

		if (!swapped)
		{
			std::cout << "Early termination on iteration: " << x + 1 << std::endl;
			break;
		}

	}
	for (int i = 0; i < length; ++i)
		std::cout << array[i] << " ";
	
	return 0;
}