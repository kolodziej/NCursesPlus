#ifndef NCURSESPLUS_SIZE_HPP
#define NCURSESPLUS_SIZE_HPP

namespace ncursesplus {

class Size
{
private:
	unsigned int rows_, cols_;

public:
	Size() : 
		rows_(0),
		cols_(0)
	{}

	Size(unsigned int rows, unsigned int cols) :
		rows_(rows),
		cols_(cols)
	{}

	inline unsigned int rows();
	inline void rows(unsigned int);

	inline unsigned int cols();
	inline void cols(unsigned int);
	
	inline void resize(unsigned int, unsigned int);
};

}

#include "impl/size.hpp"

#endif
