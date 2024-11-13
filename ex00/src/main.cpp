/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <jverdu-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:59:03 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/11/13 18:23:55 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Whatever.hpp"

int main() {
    int x = 5, y = 10;

    // Test swap
    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
    ::swap(x, y);
    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;

    // Test min and max with integers
    std::cout << "min(x, y): " << ::min(x, y) << std::endl;
    std::cout << "max(x, y): " << ::max(x, y) << std::endl;

    // Test with other types
    double a = 3.14, b = 2.71;
    std::cout << "min(a, b): " << ::min(a, b) << std::endl;
    std::cout << "max(a, b): " << ::max(a, b) << std::endl;

    std::string s1 = "apple", s2 = "banana";
    std::cout << "min(s1, s2): " << ::min(s1, s2) << std::endl;
    std::cout << "max(s1, s2): " << ::max(s1, s2) << std::endl;

    return 0;
}
/*int main( void ) 
{
    int x = 5, y = 10;

    // Test swap
    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
    swap(x, y);
    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;

    // Test min and max with integers
    std::cout << "min(x, y): " << std::min(x, y) << std::endl;
    std::cout << "max(x, y): " << std::max(x, y) << std::endl;

    // Test with other types
    double a = 3.14, b = 2.71;
    std::cout << "min(a, b): " << std::min(a, b) << std::endl;
    std::cout << "max(a, b): " << std::max(a, b) << std::endl;

    std::string s1 = "apple", s2 = "banana";
    std::cout << "min(s1, s2): " << std::min(s1, s2) << std::endl;
    std::cout << "max(s1, s2): " << std::max(s1, s2) << std::endl;
    
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}*/