#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string.h>


class Converter{
    public:
        void ft_stoc(void);
        void ft_stoi(void);
        void ft_stof(void);
        void ft_stod(void);
        void pos_inf(void);
        void neg_inf(void);
        void ft_nan(void);
        void start_convert(std::string s);
        void search_type();
    private:
        std::string s;
};

#endif