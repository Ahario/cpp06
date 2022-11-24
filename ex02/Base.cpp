#include "Base.hpp"

Base::~Base()
{
	
}

Base *generate(void)
{
	int i = 0;
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(1, 3);

	i =  dis(gen);

	if (i == 1)
		return (new A());
	else if (i == 2)
		return (new B());
	else if (i == 3)
		return (new C());
}

void identify(Base* p)
{
	std::cout << p.type
}

void identify(Base& p)
{

}