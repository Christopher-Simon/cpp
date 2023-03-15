#ifndef VAL_HPP
# define VAL_HPP

#include <iostream>
#include <exception>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <map>

class val 
{
	public:
		val();
		val(long value);
		val(char sign);
		val(val const & raw);
		~val();
		val & operator=(val const & rhs);
		const bool & getSign(void) const;
		void	setValue(long x);

	private:
		long	_value;
		char	_sign;
		bool	_isSign;
		
};

#endif