#include "val.hpp" 

val::val(): _value(0), _sign(' '), _isSign(false)
{

}

val::val(long value): _value(value), _sign(' '), _isSign(false)
{

}

val::val(char sign): _value(0), _sign(sign), _isSign(true)
{

}

val::val(val const & raw)
{
	*this = raw;
}


val::~val()
{
}

//******************ACCESSORS*****************//


//**************OVERLOAD OPERATORS**************//

val & val::operator=(val const & rhs)
{
	if (this != &rhs) {
		this->_value = rhs._value;
		this->_sign = rhs._sign;
		this->_isSign = rhs._isSign;
	}
	return (*this);
}

//*****************EXCEPTIONS*****************//


//*****************FONCTIONS*****************//

