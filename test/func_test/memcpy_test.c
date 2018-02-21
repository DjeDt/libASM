/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 23:14:49 by ddinaut           #+#    #+#             */
/*   Updated: 2018/02/21 23:15:06 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void	test_memcpy(void)
{
	char	dst[11];
	char	src[11];

	ft_bzero(dst, 11);
	ft_bzero(src, 11);

	ft_memset(src, 'b', 10);
	ft_memcpy(dst, src, 10);
	write(1, dst, 10);

	write(1, "\n", 1);
	char	*src2 = "test test";
	char	dst2[10];

	bzero(dst2, 10);
	ft_memcpy(dst2, src2, 10);
	printf("%s\n", dst2);

	bzero(dst2, 10);
	ft_memcpy(dst2, "touche touche", 9);
	printf("%s\n", dst2);
}
