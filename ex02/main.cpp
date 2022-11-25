#include "Base.hpp"

int main()
{
	Base *p;
	p = generate();
	identify(p);
	Base &rp = *p;
	identify(rp);
}