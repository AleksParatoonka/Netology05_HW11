#pragma once
//#ifdef N05_HW11_TASK02_LIBRARYDYNAMIC_EXPORTS
#ifdef N05HW11TASK02LIBRARYDYNAMIC_EXPORTS
#define N05_HW11_TASK02_LIBRARY_API __declspec(dllexport)
#else
#define N05_HW11_TASK02_LIBRARY_API __declspec(dllimport)
#endif
#include <cstring>
#include <string>

class Leaver
{
	public:
		N05_HW11_TASK02_LIBRARY_API std::string leave(std::string input);
};

