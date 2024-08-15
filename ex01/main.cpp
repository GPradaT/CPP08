#include "Span.hpp"

int main()
{
	Span	span(8);
	Span	span2;

	span.getNumbers();
	for (unsigned int i = 0; i < 10; i++)
	{
		try{
			span.addNumber(i);
			std::cout << std::endl;
			span.getNumbers();
		} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		}
	}
	std::cout << span.shortestSpan() << std::endl;
	span.getNumbers();
	return 0;
}
