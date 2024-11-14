/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <jverdu-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:14:40 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/11/14 16:21:24 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/iter.hpp"

void    printInt(int i)
{
    std::cout << "\033[32m" << i << "\033[0m" << std::endl;
}

void    printStr(std::string str)
{
    std::cout << "\033[32m" << str << "\033[0m" << std::endl;
}

int main(void)
{
    int intArray[2] = {2, 3};
    std::string strArray[4] = {"hola", "mundo", "estoy", "aqui"};

    iter(intArray, 2, printInt);
    iter(strArray, 4, printStr);
    return (0);
}