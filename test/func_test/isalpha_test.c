/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 19:42:24 by ddinaut           #+#    #+#             */
/*   Updated: 2018/02/21 19:49:39 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void	test_isalpha(void)
{
	int ret = 0;
	int ret2 = 0;
	int ret3 = 0;
	int ret4 = 0;

	ret = ft_isalpha('a');
	ret2 = ft_isalpha('z');
	ret3 = ft_isalpha('A');
	ret4 = ft_isalpha('Z');
	printf("mine:\t[a]: %d\t[z]: %d\t[A]: %d\t[Z]: %d\n", ret, ret2, ret3, ret4);

	ret = isalpha('a');
	ret2 = isalpha('z');
	ret3 = isalpha('A');
	ret4 = isalpha('Z');
	printf("real:\t[a]: %d\t[z]: %d\t[A]: %d\t[Z]: %d\n", ret, ret2, ret3, ret4);

	printf("\n");

	ret = ft_isalpha('1');
	ret2 = ft_isalpha('%');
	ret3 = ft_isalpha(' ');
	ret4 = ft_isalpha('\0');
	printf("mine:\t[1]: %d\t[%%]: %d\t[ ]: %d\t[\\0]: %d\n", ret, ret2, ret3, ret4);

	ret = isalpha('1');
	ret2 = isalpha('2');
	ret3 = isalpha(' ');
	ret4 = isalpha('\0');
	printf("mine:\t[1]: %d\t[%%]: %d\t[ ]: %d\t[\\0]: %d\n", ret, ret2, ret3, ret4);
}
