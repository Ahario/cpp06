#include "Convert.hpp"

void Converter::start_convert(std::string s)
{
    this->s = s;
    if (s == "inf" || s == "inff")
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
    int dec_flag = 0;
    int none_digit_flag = 0;
    if (s.at(i) == '+' || s.at(i) == '-')
        i++;
    while(i != j)
    {
        if (s.at(i) == 'f' && i + 1 == j && std::isdigit(s.at(i - 1)))
            ft_stof();
        if (s.at(i) == '.')
                dec_flag = 1;
        if (!std::isdigit(s.at(i)))
        {
            none_digit_flag = 1;
            break;
        }
        i++;
    }
    if (none_digit_flag == 0 && dec_flag == 1)
        ft_stod();
    else if (none_digit_flag == 0 && dec_flag == 0)
        ft_stoi();
    else
        std::cout << "What The Fuck Did You Type" << std::endl;
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
    long long i = stoi(this->s);
    int flag = 0;
    if (i > 2147483647 || i < -2147483648)
        flag = 1;
    if (i > 128 || i < 128)
    {
        if (i >= 33 && i <= 126)
            std::cout << "char: " << "Non displayable" << std::endl;
        else
            std::cout << "char: '" << static_cast<char>(i) << "'" <<std::endl;
    }
    if (flag == 0)
        std::cout << "int: " << "impossible" << std::endl;
    else
        std::cout << "int: " << i << std::endl;
    
}

void Converter::ft_stod()
{

}

void Converter::ft_stof()
{

}


