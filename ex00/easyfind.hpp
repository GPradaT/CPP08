#pragma once

#include <iostream>
#include <algorithm>
#include <iterator>
#include <stdexcept>

class	except : public std::exception 
{
	public:
		const char *what() const throw() {
			return "Your number is not in the container :/, sorry :(";
		};
};

template<typename T>
typename T::iterator	easyfind(T& first, int second)
{
	typename T::iterator	it = std::find(first.begin(), first.end(), second);
	if (it == first.end())
		throw except();
	return it;
}


