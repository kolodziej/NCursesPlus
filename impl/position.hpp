namespace ncursesplus {

inline unsigned int Position::row()
{
	return row_;
}

inline void Position::row(unsigned int row)
{
	row_ = row;
}

inline unsigned int Position::col()
{
	return col_;
}

inline void Position::col(unsigned int col)
{
	col_ = col;
}

inline void Position::move(unsigned int row, unsigned int col)
{
	row_ = row;
	col_ = col;
}

}
