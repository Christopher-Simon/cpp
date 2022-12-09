#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(MateriaSource const & raw);
		~MateriaSource();
		MateriaSource & operator=(MateriaSource const & rhs);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);

	private:
		AMateria *_sourceSlot[4];
};

#endif