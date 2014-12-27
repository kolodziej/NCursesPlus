namespace ncursesplus {

inline std::string Window::name() const
{
	return name_;
}

inline WINDOW* Window::genericWindow() const
{
	return window_;
}

inline const std::vector<Window::Ptr>& Window::children() const
{
	return children_;
}

inline void Window::addWindow(Window::Ptr window)
{
	children_.push_back(window);
}

inline bool Window::operator==(const Window& window)
{
	return window.name() == this->name_;
}

}
