#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iostream>
#include <exception>
#include <algorithm>

class Span {
	public:
		Span(size_t n);
		Span(const Span &other);
		virtual ~Span();

		Span &operator=(const Span &oher);

		void addNumber(int	nbr);
		void addNumber(int start, int end);
		size_t shortestSpan();
		size_t longestSpan();
		void display();

		template <class InputIterator>
		void addNumber(InputIterator start, InputIterator end) {
			if (std::abs(end - start) + _vect.size() > _max)
				throw OverflowException();
			std::copy(start, end, std::back_inserter(_vect));
		}

		class OverflowException : public std::exception {
			public:
				virtual const char*	what() const throw();
		};

		class FewValuesException : public std::exception {
			public:
				virtual const char*	what() const throw();
		};
		
	private:
		Span();
		unsigned int		_max;
		std::vector<int>	_vect;
};

#endif