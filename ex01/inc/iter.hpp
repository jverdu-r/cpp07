/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <jverdu-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:08:16 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/11/14 16:22:13 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template<typename T>
void    print(T a)
{
    std::cout << a << std::endl;
}

template<typename T, typename F>
void    iter(T *array, unsigned int len, F(*func)(T))
{
    for (unsigned int i = 0; i < len; i++)
        func(array[i]);
}

#endif