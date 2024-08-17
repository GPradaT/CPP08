#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template<typename T>
class	MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>() {}
		virtual ~MutantStack() {}
		MutantStack(const MutantStack<T> &src) : std::stack<T>(src) {}
		MutantStack<T>	&operator=(const MutantStack<T> &src)
		{
			if (this != &src)
				std::stack<T>::operator=(src);
			return *this;
		}


		typedef typename std::deque<T>::iterator iterator;

		iterator	begin()
		{
			return this->c.begin();
		}
		iterator	end()
		{
			return this->c.end();
		}
};

#endif
