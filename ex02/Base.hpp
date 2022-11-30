#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <string.h>
#include <random>

class Base{
	public:
		virtual ~Base();
};

class A : public Base{
	private:
		std::string type = "A";
};

class B : public Base{
	private:
		std::string type = "B";
};

class C : public Base{
	private:
		std::string type = "C";
};

Base *generate(void);
void identify(Base* p);
void identify(Base& p);

#endif