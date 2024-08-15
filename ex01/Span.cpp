#include "Span.hpp"

Span::Span() : _numbers(0), _max(0){}

Span::Span(unsigned int N) : _max(N)
{
	_numbers.resize(N);
}

Span::~Span() {}

Span::Span(const Span &src)
{
	*this = src;
}

Span	Span::operator=(const Span &src)
{
	if (this != &src)
	{
		this->_numbers = std::vector<int>(src._max);
		for (unsigned int i = 0; i < src._max; i++)
			this->_numbers[i] = src._numbers[i];
		this->_max = src._max;
	}
	return *this;
}

void	Span::addNumber(int num)
{
	static unsigned int	count = 0;
	
	if (count == _max)
		throw Full();
	else
		this->_numbers.at(count++) = num;
}

unsigned int	Span::getMax() const
{
	return this->_max;
}

void	Span::printNumbers() const
{
	for (unsigned int i = 0; i < _max; i++)
		std::cout << this->_numbers[i] << std::endl;
}

int	Span::shortestSpan() const
{
	int	distance = 0;
	if (_max <= 1)
		throw VoidVect();
	else
	{
		distance = std::abs(_numbers[0] - _numbers.at(1));
		for (unsigned int i = 0; i < _max; i++)
		{
			for (unsigned int j = i + 1; j < _max; j++)
			{
				int	actual = std::abs(this->_numbers[i] - this->_numbers[j]);
				if (actual <= distance)
					distance = std::abs(actual);
			}
		}
	}
	return distance;
}

int	Span::longestSpan() const
{
	int	distance = 0;
	if (_max <= 1)
		throw VoidVect();
	else
	{
		distance = std::abs(_numbers[0] - _numbers.at(1));
		for (unsigned int i = 0; i < _max; i++)
		{
			for (unsigned int j = i; j < _max; j++)
			{
				int	actual = std::abs(this->_numbers[i] - this->_numbers[j]);
				if (actual >= distance)
					distance = std::abs(actual);
			}
		}

	}
	return distance;
}
