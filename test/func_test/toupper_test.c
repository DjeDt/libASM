/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 19:52:45 by ddinaut           #+#    #+#             */
/*   Updated: 2018/02/21 20:04:21 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void	test_toupper(void)
{
	char c;
	char c2;

	printf("Test [1] : 'a' & 'z'\n");
	c = 'a';
	c2 = 'z';
	printf("mine: %c %c\n", ft_toupper(c), ft_toupper(c2));
	printf("real: %c %c\n", toupper(c), toupper(c2));


	printf("test [2] : 'b' & 'g'\n");
	c = 'b';
	c2 = 'g';
	printf("mine: %c %c\n", ft_toupper(c), ft_toupper(c2));
	printf("real: %c %c\n", toupper(c), toupper(c2));

	printf("test [3] : 'A' & 'Z'\n");
	c = 'A';
	c2 = 'Z';
	printf("mine: %c %c\n", ft_toupper(c), ft_toupper(c2));
	printf("real: %c %c\n", toupper(c), toupper(c2));

	printf("test [4] : '\\0' & '2'\n");
	c = '\0';
	c2 = '2';
	printf("mine: %c %c\n", ft_toupper(c), ft_toupper(c2));
	printf("real: %c %c\n", toupper(c), toupper(c2));
}
