/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:01:00 by hyeo              #+#    #+#             */
/*   Updated: 2022/11/24 12:01:01 by hyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string.h>
#include <limits>

class Converter{
    public:
        Converter();
        ~Converter();
        Converter(const Converter& a);
		Converter &operator=(const Converter& a);
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
        int dec_flag;
        int zero_flag;
};

#endif
