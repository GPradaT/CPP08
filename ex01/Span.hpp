#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

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
		void	getNumbers() const;


		class	WeAreFull : public std::exception {
			public:
				virtual const char *Full() const throw() {
					return FULL;
				}
				virtual const char *VoidVector() const throw() {
					return VOIDVECT;
				}
		};
};

#endif
