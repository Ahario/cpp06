/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:00:51 by hyeo              #+#    #+#             */
/*   Updated: 2022/11/24 12:00:52 by hyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

void Converter::start_convert(std::string s)
{
    this->s = s;
    this->dec_flag = 0;
    if (s == "+inf" || s == "+inff")
        pos_inf();
    else if (s == "-inf" || s == "-inff")
        neg_inf();
    else if (s == "nan" || s == "nanf")
        ft_nan();
    else if (this->s.length() == 1 && !std::isdigit(this->s.at(0)))
        ft_stoc();
    else
        search_type();
}

void Converter::search_type()
{
    int i = 0;
    int j = s.length();
    int none_digit_flag = 0;
    if (s.at(i) == '+' || s.at(i) == '-')
        i++;
    while(i != j)
    {
        if (s.at(i) == 'f' && i + 1 == j && std::isdigit(s.at(i - 1)))
            ft_stof();
        if (s.at(i) == '.')
        {
            i++;
            this->dec_flag = 1;
        }
        if (!std::isdigit(s.at(i)))
        {
            none_digit_flag = 1;
            break;
        }
        i++;
    }
    if (none_digit_flag == 0 && this->dec_flag == 1)
        ft_stod();
    else if (none_digit_flag == 0 && this->dec_flag == 0)
        ft_stoi();
    else
        std::cout << "Wrong Input" << std::endl;
}  


void Converter::ft_stoc()
{
    char c = this->s.at(0);
    if (c >= 33 && c <= 126)
        std::cout << "char: '" << c << "'" << std::endl;
    else
        std::cout << "char: " << "Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << std::endl;
    std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void Converter::ft_stoi()
{
    long double i = strtold(this->s.c_str(), NULL);
    int flag = 0;
    if (i > std::numeric_limits<int>::max() || i < std::numeric_limits<int>::min())
        flag = 1;
    if (i < std::numeric_limits<char>::max() || i > std::numeric_limits<char>::min())
    {
        if (i >= 33 && i <= 126)
            std::cout << "char: '" << static_cast<char>(i) << "'" <<std::endl;
        else
            std::cout << "char: " << "Non displayable" << std::endl;
    }
    if (flag == 1)
        std::cout << "int: " << "impossible" << std::endl;
    else
        std::cout << "int: " << i << std::endl;
    if (this->dec_flag == 1)
    {
        std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(i) << std::endl;
    }
    else
    {
        std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
    }
}

void Converter::ft_stod()
{
    double i = strtod(this->s.c_str(), NULL);
    int flag = 0;
    if (i > std::numeric_limits<int>::max() || i < std::numeric_limits<int>::min())
        flag = 1;
    if (i < std::numeric_limits<char>::max() || i > std::numeric_limits<char>::min())
    {
        if (i >= 33 && i <= 126)
            std::cout << "char: '" << static_cast<char>(i) << "'" <<std::endl;
        else
            std::cout << "char: " << "Non displayable" << std::endl;
    }
    if (flag == 1)
        std::cout << "int: " << "impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(i) << std::endl;
    if (this->dec_flag == 1)
    {
        std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
        std::cout << "double: " << i << std::endl;
    }
    else
    {
        std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
        std::cout << "double: " << i << ".0" << std::endl;
    }
}

void Converter::ft_stof()
{
    float i = strtof(this->s.c_str(), NULL);
    int flag = 0;
    if (i > std::numeric_limits<int>::max() || i < std::numeric_limits<int>::min())
        flag = 1;
    if (i < std::numeric_limits<char>::max() || i > std::numeric_limits<char>::min())
    {
        if (i >= 33 && i <= 126)
            std::cout << "char: '" << static_cast<char>(i) << "'" <<std::endl;
        else
            std::cout << "char: " << "Non displayable" << std::endl;
    }
    if (flag == 1)
        std::cout << "int: " << "impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(i) << std::endl;
    if (this->dec_flag == 1)
    {
        std::cout << "float: " << i << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(i) << std::endl;
    }
    else
    {
        std::cout << "float: " << i << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
    }
}

void Converter::pos_inf()
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: inff" << std::endl;
    std::cout << "double: inf" << std::endl;
}

void Converter::neg_inf()
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: -inff" << std::endl;
    std::cout << "double: -inf" << std::endl;
}

void Converter::ft_nan()
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: nanf" << std::endl;
    std::cout << "double: nan" << std::endl;
}


