#include "Data.hpp"


int main()
{
	Data d;
	uintptr_t conv;
	Data t;

	d.a = "hello";
	d.b = 777;
	d.c = "goodbye";
	conv = serialize(&d);
	t = deserialize(conv);
	std::cout << t.a << std::endl;
	std::cout << t.b << std::endl;
	std::cout << t.c << std::endl;
}