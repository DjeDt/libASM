/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 22:57:34 by ddinaut           #+#    #+#             */
/*   Updated: 2018/02/21 23:05:52 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void	test_strlen(void)
{
	int		ret;
	int		ret2;
	char	*ptr = "Helo World";

	printf("Test [1] : str is 'test' :\n");
	ret = ft_strlen("test");
	ret2 = strlen("test");
	printf("mine : %d\treal : %d\n\n", ret, ret2);

	printf("Test [2] : str is empty :\n");
	ret = ft_strlen("\0");
	ret2 = strlen("\0");
	printf("mine : %d\treal : %d\n\n", ret, ret2);

	printf("Test [3] : str is 'Hello World!\\n\\0' :\n");
	ret = ft_strlen("Hello World!\n\0");
	ret2 = strlen("Hello World!\n\0");
	printf("mine : %d\treal : %d\n\n", ret, ret2);

	printf("Test [4] : str is 'testattest' :\n");
	ret = ft_strlen("testatest");
	ret2 = strlen("testatest");
	printf("mine : %d\treal : %d\n\n", ret, ret2);

	printf("Test [5] : str is 'Helo World' :\n");
	ret = ft_strlen(ptr);
	ret2 = ft_strlen(ptr);
	printf("mine : %d\treal : %d\n\n", ret, ret2);
}
