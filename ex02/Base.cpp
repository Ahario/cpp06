#include "Base.hpp"

Base::~Base()
{
	
}

Base *generate(void)
{
	int i = 0;
	Base *p;
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(1, 3);

	i =  dis(gen);

	if (i == 1)
	{
		p = new A();
		return (p);
	}
	if (i == 2)
	{
		p = new B();
		return (p);
	}
	if (i == 3)
	{
		p = new C();
		return (p);
	}
	return (p);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
	{
		std::cout << "*" << "A" << std::endl;
	}
	else if (dynamic_cast<B*>(p))
	{
		std::cout << "*" << "B" << std::endl;
	}
	else if (dynamic_cast<C*>(p))
	{
		std::cout << "*" << "C" << std::endl;
	}

}

void identify(Base& p)
{
	try{
		Base &bp = dynamic_cast<A&>(p);
		std::cout << "&" << "A" << std::endl;
	}
	catch(std::exception &e){};
	try{
		Base &bp = dynamic_cast<B&>(p);
		std::cout << "&" << "B" << std::endl;
	}
	catch(std::exception &e){};
	try{
		Base &bp = dynamic_cast<C&>(p);
		std::cout << "&" << "C" << std::endl;
	}
	catch(std::exception &e){};
}