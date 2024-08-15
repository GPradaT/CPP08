#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <exception>
# include <cmath>
# include <climits>

# define FULL "The container is Full, srry :)"
# define VOIDVECT "Insufficient elements to get Thus values... ¬¬"

class	Span
{
	private:
		std::vector<int>	_numbers;
		unsigned int		_max;

	public:
		Span();
		Span(unsigned int N);
		~Span();
		Span(const Span &src);
		Span	operator=(const Span &src);

		void	addNumber(int num);
		unsigned int	getMax() const;
		void	printNumbers() const;
		int	shortestSpan() const;
		int	longestSpan() const;

		class	Full : public std::exception {
			public:
				virtual const char *what() const throw() {
					return FULL;
				}
		};
		class	VoidVect : public std::exception {
			public:
				virtual const char *what() const throw() {
					return VOIDVECT;
				}
		};
};

#endif
