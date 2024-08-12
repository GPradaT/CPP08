#pragma once

#include <iostream>
#include <algorithm>
#include <iterator>
#include <stdexcept>

template<typename T>
typename T::iterator	easyfind(T& first, int second)
{
	typename T::iterator it;

	it = std::find(first.begin(), first.end(), second);
	
	return it;
}


