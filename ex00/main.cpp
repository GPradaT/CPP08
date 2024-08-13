#include "easyfind.hpp"
#include <vector>

int	main( void )
{
	int	Array[7] = {2, 3, 5, 1, 5, 7, 8};
	std::vector<int> abc(7);
	for (int i = 0; i != 7; i++)
		abc[i] = Array[i];

	try
	{
		std::vector<int>::iterator ref = ::easyfind(abc, 3);
		std::cout << *ref << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::vector<int>::iterator ref = ::easyfind(abc, 13);
		std::cout << *ref << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
