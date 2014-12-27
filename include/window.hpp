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
	Size size_;
	Position position_;
	WINDOW* window_;
	std::vector<WindowPtr> children_;

public:
	Window(std::string, Size = Size(), Position = Position());
	~Window();
	
	inline std::string name();
	inline WINDOW* genericWindow();
	const std::vector<WindowPtr>& children();

	void addWindow(WindowPtr window);
	void render(WindowPtr);

	bool operator==(const Window& window)
	{
		return window.name() == name_;
	}
};

}

#include "impl/window.hpp"

#endif
