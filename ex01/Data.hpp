#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <string.h>

typedef struct Data{
	std::string a;
	int			b;
	std::string	c;
} Data;

uintptr_t serialize(Data* ptr)
{
	uintptr_t serial = reinterpret_cast<uintptr_t>(ptr);
	return (serial);
}

Data deserialize(uintptr_t raw)
{
	Data *ori = reinterpret_cast<Data*>(raw);
	return (*ori);
}

#endif