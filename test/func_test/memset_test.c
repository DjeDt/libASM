/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 23:06:34 by ddinaut           #+#    #+#             */
/*   Updated: 2018/02/21 23:13:18 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void	print(const char *str, int len)
{
	int	count;

	count = -1;
	while (++count < len)
		printf("%d\t", str[count]);
	printf("\n");
}

void	test_memset(void)
{
	int		len;
	char	*test;

	len = 10;
	test = malloc(len);

	test = ft_memset(test, 118, len);
	print(test, len);

	test = ft_memset(test, 79, len);
	print(test, len);

	test = ft_memset(test, 0, len);
	print(test, len);


	test = ft_memset(test, 97, len);
	print(test, len);

	free(test);
}
