/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <jverdu-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:20:24 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/11/14 17:48:27 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Array.hpp"

int main() 
{
    try 
    {
        Array<int> arr1;
        Array<int> arr2(5);

        for (unsigned int i = 0; i < arr2.size(); i++) 
            arr2[i] = i + 1;
        std::cout << "arr2 elements: ";
        for (unsigned int i = 0; i < arr2.size(); i++) 
            std::cout << arr2[i] << " ";
        std::cout << std::endl;
        Array<int> arr3 = arr2;
        arr2[0] = 42;
        std::cout << "arr2[0] after modification: " << arr2[0] << std::endl;
        std::cout << "arr3[0] (copy of arr2[0]): " << arr3[0] << std::endl;
        std::cout << "Attempting out of bounds access..." << std::endl;
        std::cout << arr2[10] << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "\033[31m" <<"Exception: " << e.what() << "\033[0m" << std::endl;
    }

    return 0;
}