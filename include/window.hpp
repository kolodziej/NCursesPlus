#ifndef NCURSESPLUS_WINDOW_HPP
#define NCURSESPLUS_WINDOW_HPP
#include <ncurses.h>

#include <string>
#include <vector>
#include <memory>

namespace ncursesplus {

class Size;
class Position;

typedef std::shared_ptr<Window> WindowPtr;

class Window
{
private:
	std::string name_;
	WINDOW* window_;
	std::vector<WindowPtr> children_;

public:
	Window(Size, Position = Position());
	~Window();
	
	std::string name()
	{
		return name_;
	}
	WINDOW* genericWindow()
	{
		return window_;
	}
	const std::vector<WindowPtr>& children()
	{
		return children_;
	}

	void addWindow(WindowPtr);
	void render(WindowPtr);

	bool operator==(const Window& window)
	{
		return name_ == window.name();
	}
};

}

#endif
