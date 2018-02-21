/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 20:02:22 by ddinaut           #+#    #+#             */
/*   Updated: 2018/02/21 20:07:09 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void	test_tolower(void)
{
	char c;
	char c2;


	printf("Test [1] : 'A' & 'Z'\n");
	c = 'A';
	c2 = 'Z';
	printf("mine: [%c] [%c]\n", ft_tolower(c), ft_tolower(c2));
	printf("real: [%c] [%c]\n", tolower(c), tolower(c2));

	printf("Test [2] : 'a' & 'z'\n");
	c = 'a';
	c2 = 'z';
	printf("mine: [%c] [%c]\n", ft_tolower(c), ft_tolower(c2));
	printf("real: [%c] [%c]\n", tolower(c), tolower(c2));

	printf("Test [3] : '3' & '\\0'\n");
	c = '3';
	c2 = '\0';
	printf("mine: [%c] [%c]\n", ft_tolower(c), ft_tolower(c2));
	printf("real: [%c] [%c]\n", tolower(c), tolower(c2));

	printf("Test [4] : '\\t' & '#'\n");
	c = '\t';
	c2 = '#';
	printf("mine: [%c] [%c]\n", ft_tolower(c), ft_tolower(c2));
	printf("real: [%c] [%c]\n", tolower(c), tolower(c2));
}
