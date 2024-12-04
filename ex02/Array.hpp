/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 21:42:20 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/12/04 22:22:51 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <exception>

template <typename T>
class Array{
    private:
        T *data;
        unsigned int array_size;
    public:
        Array();
        Array(unsigned int n);
        ~Array();
        Array(Array const &other);
        Array &operator=(Array const &other);
        T &operator[](unsigned int index);
        const T &operator[](unsigned int index) const;
        unsigned int	size() const;
    

    class OutofBoundsException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
};

# include "Array.tpp"
	