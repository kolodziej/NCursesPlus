#include "gtest/gtest.h"

#include "application.hpp"

#include <cstring>

using ncursesplus::Application;

class TestApp : public Application
{
public:
	TestApp(int argc, char** argv) :
		Application(argc, argv)
	{}
	bool checkArgv(int argc, char** argv)
	{
		auto argv_ = getArgv_();
		for (int i = 0; i < argc; ++i)
		{
			if (strcmp(argv_[i].data(), argv[i]) != 0)
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
	char** av = new char*[ac];
	std::stringstream str;
	for (int i = 0; i < ac; ++i)
	{
		char* buf = new char[80];
		sprintf(buf, "param %03d", i);
		av[i] = buf;
	}
	TestApp app(ac, av);
	ASSERT_TRUE(app.checkArgv(ac, av));
	ASSERT_EQ(app.main(), 0);
}
