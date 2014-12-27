#ifndef NCURSESPLUS_APPLICATION_HPP
#define NCURSESPLUS_APPLICATION_HPP

#include "window.hpp"

namespace ncursesplus {

class Application
{
private:
	std::vector<std::string> argv_;
	Window::Ptr focus_;

public:
	Application(int, char**);
	virtual int main() = 0;
};

}

#endif
