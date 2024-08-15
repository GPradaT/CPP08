#include "Span.hpp"

int main()
{
	Span	span(8);

	span.getNumbers();
	try{
		for (unsigned int i = 0; i < 10; i++)
		{
			span.addNumber(3);
			std::cout << std::endl;
			span.getNumbers();
		}
	} catch (Span::WeAreFull &e) {
		std::cout << e.Full() << std::endl;
	}
	return 0;
}
