#include "Convert.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
		return (1);
	Converter a;
	std::string s;
	s = argv[1];
	a.start_convert(s);
}