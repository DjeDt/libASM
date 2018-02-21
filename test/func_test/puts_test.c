/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puts_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 20:07:42 by ddinaut           #+#    #+#             */
/*   Updated: 2018/02/21 22:55:30 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void	test_puts(void)
{

	printf("Test [1] : empty string :\n");
	ft_puts("");
	puts("");

	printf("Test [2] : random string :\nMine :\n");
	ft_puts("test");
	ft_puts("puts is working great");
	ft_puts("Hello World!");

	printf("\nReal:\n");
	puts("test");
	puts("puts is working great");
	puts("Hello World!");

	printf("\ntest [3] : NULL ptr\n");

	ft_puts(NULL);
	puts(NULL);
}
