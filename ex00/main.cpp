/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruff <sruff@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 15:17:07 by sruff             #+#    #+#             */
/*   Updated: 2026/05/30 15:02:45 by sruff            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>
#include <string>

int main( void )
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "string1";
	std::string d = "string2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	// equal values: min/max must return the second argument
	int x = 42;
	int y = 42;
	std::cout << "min( equal ) = " << ::min( x, y ) << std::endl;
	std::cout << "max( equal ) = " << ::max( x, y ) << std::endl;

	//int a = 2;
	//int b = 3;
	char ca = 'a';
	char cb = 'b';
	std::cout << "ca = " << ca << ", cb = " << cb << std::endl;
	::swap( ca, cb );
	std::cout << "ca = " << ca << ", cb = " << cb << std::endl;
	std::cout << "min( ca, cb ) = " << ::min( ca, cb ) << std::endl;
	std::cout << "max( ca, cb ) = " << ::max( ca, cb ) << std::endl;

	return 0;
}
