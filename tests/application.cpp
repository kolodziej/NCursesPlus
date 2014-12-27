#include "gtest/gtest.hpp"

#include "application.hpp"

using ncursesplus::Application;

class TestApp : public Application
{
public:
	bool checkArgv(int argc, char** argv)
	{
		for (int i = 0; i < argc; ++i)
		{
			if (argv_[i] != argv[i])
			{
				return false;
			}
		}
		return true;
	}
	virtual int main()
	{
		return 0;
	}
};

TEST(ApplicationTest, main)
{
	int ac = 5;
	char** av = {
		"one",
		"two",
		"three",
		"four",
		"five"
	};
	Application app(ac, av);
	ASSERT_TRUE(app.checkArgv(ac, av));
}
