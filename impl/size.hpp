namespace ncursesplus {

inline unsigned int Size::rows()
{
	return rows_;
}

inline void Size::rows(unsigned int rows)
{
	rows_ = rows;
}

inline unsigned int Size::cols()
{
	return cols_;
}

inline void Size::cols(unsigned int cols)
{
	cols_ = cols;
}

inline void Size::resize(unsigned int rows, unsigned int cols)
{
	rows_ = rows;
	cols_ = cols;
}

}
