#ifndef NCURSESPLUS_WINDOW_HPP
#define NCURSESPLUS_WINDOW_HPP
#include <ncurses.h>

#include "size.hpp"
#include "position.hpp"

#include <string>
#include <vector>
#include <memory>

namespace ncursesplus {

class Window
{
public:
	typedef std::shared_ptr<Window> Ptr;
private:
	std::string name_;
	Size size_;
	Position position_;
	WINDOW* window_;
	std::vector<Ptr> children_;

public:
	Window(std::string, Size = Size(), Position = Position());
	~Window();
	
	inline std::string name() const;
	inline WINDOW* genericWindow() const;
	inline const std::vector<Ptr>& children() const;

	inline void addWindow(Ptr window);
	void render(Ptr);

	inline bool operator==(const Window&);
};

}

#include "impl/window.hpp"

#endif
