#ifndef NCURSESPLUS_POSITION_HPP
#define NCURSESPLUS_POSITION_HPP

namespace ncursesplus {

class Position
{
private:
	unsigned int row_, col_;

public:
	Position() :
		row_(0),
		col_(0)
	{}

	Position(unsigned int row, unsigned int col) :
		row_(row),
		col_(col)
	{}

	inline unsigned int row();
	inline void row(unsigned int);

	inline unsigned int col();
	inline void col(unsigned int);

	inline void move(unsigned int, unsigned int);
};

}

#include "impl/position.hpp"

#endif
