#include "Span.hpp"

int main()
{
	Span	span(8);
	Span	span2;

	span.printNumbers();
	std::cout << "====================" << std::endl;
	span.addNumber(12);
	span.addNumber(14);
	span.addNumber(1);
	span.addNumber(4);
	span.addNumber(3);
	span.addNumber(-12);
	span.addNumber(-3);
	std::cout << "====================" << std::endl;
	span.printNumbers();
	
	std::cout << "===ShortestSpan=====" << std::endl;
	
	std::cout << span.shortestSpan() << std::endl;
	std::cout << "===LongestSpan======" << std::endl;
	std::cout << span.longestSpan() << std::endl;
	std::cout << "====================" << std::endl;
	span.printNumbers();
	return 0;
}
