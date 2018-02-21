/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 18:19:05 by ddinaut           #+#    #+#             */
/*   Updated: 2018/02/21 19:09:34 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

#define LEN 10

void	test_bzero(void)
{
	int		count = -1;


	char	test[LEN] = {101};

	printf("Test [1] : simple test\n");
	ft_bzero(test, LEN);
	while (++count < LEN)
		printf("test[%d] = %d\n", count, test[count]);
	count = -1;
	printf("\n");

	printf("Test [2] : null ptr as argument\n");
	char	*test2 = NULL;
	ft_bzero(test2, LEN);
	printf("\n");

	printf("Test [3] : len test\n");
	test2 = malloc(LEN);
	test2 = strcpy(test2, "bbbbbbbbbb");

	ft_bzero(test2, 5);
	while (++count < LEN)
		printf("test[%d] = %d\n", count, test2[count]);
}
