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

	unsigned int rows()
	{
		return rows_;
	}
	void rows(unsigned int rows)
	{
		rows_ = rows;
	}
	unsigned int cols()
	{
		return cols_;
	}
	void cols(unsigned int cols)
	{
		cols_ = cols;
	}
	void resize(unsigned int rows, unsigned int cols)
	{
		rows_ = rows;
		cols_ = cols;
	}
};

}

#endif
