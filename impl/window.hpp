namespace ncursesplus {

inline std::string Window::name()
{
	return name_;
}

inline WINDOW* Window::genericWindow()
{
	return window_;
}

inline const std::vector<WindowPtr>& Window::children()
{
	return children_;
}

inline void Window::addWindow(WindowPtr window)
{
	children_.push_back(window);
}

}
