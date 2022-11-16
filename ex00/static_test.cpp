/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   static_test.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmartin <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 09:12:33 by olmartin          #+#    #+#             */
/*   Updated: 2022/11/16 09:21:20 by olmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {

	int a = 1;
	float b = 1.01f;
	std::cout << "1" << static_cast<char>(a) << " Fin" << std::endl;
	std::cout << "1.01f" << static_cast<char>(b) << std::endl;
	std::cout << "1.6" << static_cast<char>(1.6) << std::endl;
	std::cout << "47" << static_cast<char>(47) << std::endl;
	std::cout << "127" << static_cast<char>(127) << std::endl;
	std::cout << "257" << static_cast<char>(257) << std::endl;

	return 0;
}

