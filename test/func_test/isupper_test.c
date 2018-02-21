/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isupper_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 19:31:34 by ddinaut           #+#    #+#             */
/*   Updated: 2018/02/21 19:39:02 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void	test_isupper(void)
{
	int ret;
	int ret2;

	ret = 0;
	ret2 = 0;

	printf("Test [1] : isupper('A') & isupper('Z') :\n");

	ret = ft_isupper('A');
	ret2 = ft_isupper('Z');
	printf("mine: A = %d\tZ = %d\n", ret, ret2);
	ret = isupper('A');
	ret2 = isupper('Z');
	printf("real: A = %d\tZ = %d\n", ret, ret2);

	printf("\n");

	printf("Test [2] : isupper('z') & isupper('1') :\n");

	ret = ft_isupper('z');
	ret2 = ft_isupper('1');
	printf("mine: z = %d\t1 = %d\n", ret, ret2);
	ret = isupper('z');
	ret2 = isupper('1');
	printf("real: a = %d\t1 = %d\n", ret, ret2);
}
