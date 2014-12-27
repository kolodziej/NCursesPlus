#include "window.hpp"

#include <ncurses.h>

namespace ncursesplus {

Window::Window(std::string name, Size size, Position pos) :
	name_(name),
	size_(size),
	position_(position),
	window_(nullptr)
{
	
}
	
}
