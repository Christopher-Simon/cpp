#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>
#include <string>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define RESET "\033[0m"

template< typename T >
class Array 
{
	public:
		Array(): _element(NULL), _size(0)
		{
		}

		Array(size_t n): _size(n) 
		{
			_element = new T[n];
			for (size_t i = 0; i < this->_size; i++)
				this->_element[i] = T();
		}

		Array(Array const & raw): _element(NULL), _size(0) 
		{
			*this = raw;
		}

		~Array()
		{
			if (this->_element)
				delete[] this->_element;
		}

		Array & operator=(Array const & rhs) 
		{
			if (this == &rhs)
				return (*this);
			if (this->_element)
				delete[] this->_element;
			this->_size = rhs.size();
			this->_element = new T[rhs.size()];
			for (size_t i = 0; i < this->_size; i++)
				this->_element[i] = rhs[i];
			return (*this);
		}

		const size_t & size() const 
		{
			return (_size);
		}

		T & operator[] (size_t idx)
		{
			if (idx >= _size)
				throw (std::exception());
			return (this->_element[idx]);
		}

		const T & operator[] (size_t idx) const
		{
			if (idx >= _size)
				throw (std::exception());
			return (this->_element[idx]);
		}

	private:
		T 		*_element;
		size_t	_size;
};

#endif
