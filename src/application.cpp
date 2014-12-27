#include "application.hpp"
#include <iostream>
namespace ncursesplus {

Application::Application(int argc, char** argv) :
	argv_(argv, argv+argc)
{}

const std::vector<std::string>& Application::getArgv_()
{
	return argv_;
}

}
