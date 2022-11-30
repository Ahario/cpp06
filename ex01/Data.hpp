#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <string.h>

typedef struct Data{
	std::string a;
	int			b;
	std::string	c;
	Data();
    ~Data();
    Data(const Data& a);
	Data &operator=(const Data& a);
} Data;
uintptr_t serialize(Data* ptr);
Data deserialize(uintptr_t raw);


#endif