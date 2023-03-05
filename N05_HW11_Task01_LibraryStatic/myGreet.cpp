#include "myGreet.h"
#include <cstring>
#include <string>
namespace myGreet
{
	std::string Greeter::greet(std::string input) {
		return "Здравствуйте, " + input + "!";
	}
}