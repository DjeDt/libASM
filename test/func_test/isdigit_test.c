/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 23:14:01 by ddinaut           #+#    #+#             */
/*   Updated: 2018/02/21 23:14:15 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void	test_isdigit(void)
{
	int ret;
	int ret2;

	ret = ft_isdigit('0');
	ret2 = ft_isdigit('9');
	printf("mine: %d %d", ret, ret2);

	ret = isdigit('0');
	ret2 = isdigit('9');
	printf("real: %d %d", ret, ret2);

	ret = ft_isdigit(47);
	ret2 = ft_isdigit(58);
	printf("mine: %d %d", ret, ret2);

	ret = ft_isdigit(47);
	ret2 = ft_isdigit(58);
	printf("mine: %d %d", ret, ret2);
}
