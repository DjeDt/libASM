/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   islower_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 19:39:16 by ddinaut           #+#    #+#             */
/*   Updated: 2018/02/21 19:42:14 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void	test_islower(void)
{
	int ret;
	int ret2;

	printf("Test [1] : [a] & [z] : \n");
	ret = ft_islower('a');
	ret2 = ft_islower('z');
	printf("mine: a = %d\tz = %d\n", ret, ret2);
	ret = islower('a');
	ret2 = islower('z');
	printf("real: a = %d\tz = %d\n", ret, ret2);

	printf("\n");

	printf("Test [2] : [A] & [1] : \n");
	ret = ft_islower('A');
	ret2 = ft_islower('1');
	printf("mine: A = %d\t1 = %d\n", ret, ret2);
	ret = islower('A');
	ret2 = islower('1');
	printf("real: A = %d\t1 = %d\n", ret, ret2);
}
