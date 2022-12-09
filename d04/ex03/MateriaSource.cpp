#include "MateriaSource.hpp" 

MateriaSource::MateriaSource()
{
	for (size_t i(0); i < 4; i++)
		_sourceSlot[i] = NULL;
	std::cout << "Created MateriaSource"<< std::endl;

}

MateriaSource::MateriaSource(MateriaSource const & raw)
{
	for (size_t i(0); i < 4; i++)
		_sourceSlot[i] = NULL;
	*this = raw;
	std::cout << "Created MateriaSource"<< std::endl;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
	if (this != &rhs) {
		for (size_t i(0); i < 4; i++)
		{
			if (this->_sourceSlot[i])
				delete	this->_sourceSlot[i];
			if (rhs._sourceSlot[i])
				this->_sourceSlot[i] = rhs._sourceSlot[i]->clone();
			else
				this->_sourceSlot[i] = NULL;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (size_t i(0); i < 4; i++)
	{
		if(_sourceSlot[i])
			delete _sourceSlot[i];
	}
	std::cout << "Destroyed MateriaSource"<< std::endl;
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (size_t i(0); i < 4; i++)
	{
		if (!_sourceSlot[i]) {
			std::cout << "MateriaSource Learns " << m->getType() << " Materia"<< std::endl;
			this->_sourceSlot[i] = m->clone();
			return ;
		}
	}
	std::cout << "MateriaSource knows enough "<< std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (size_t i(0); i < 4; i++)
	{
		if (_sourceSlot[i] && !_sourceSlot[i]->getType().compare(type)) {
			std::cout << "MateriaSource creates " << _sourceSlot[i]->getType() << " Materia"<< std::endl;
			return (_sourceSlot[i]->clone());
		}
	}
	std::cout << "The Source didn't learn this Materia"<< std::endl;
	return (NULL);
}
