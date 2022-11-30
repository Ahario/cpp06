#include "Data.hpp"

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

Data::Data()
{
}
Data::~Data()
{
}
Data::Data(const Data& a)
{
	*this = a;
}
Data &Data::operator=(const Data& a)
{
	this->a = a.a;
	this->b = a.b;
	this->c = a.c;

	return (*this);
}