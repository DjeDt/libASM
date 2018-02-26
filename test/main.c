/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 14:39:59 by ddinaut           #+#    #+#             */
/*   Updated: 2018/02/26 11:13:11 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_strcpy(void)
{
	char	s1[20];
	char	*s2;

	ft_bzero(s1, 20);
	s2 = malloc(20);
	ft_bzero(s2, 20);
	ft_strcpy(s1, "Hello World");
	ft_strcpy(s2, "Hello World");
	printf("%s\n", s1);
	printf("%s\n", s2);
	free(s2);
}

int	main(void)
{
//	test_strcpy();
//	test_bzero();
	test_strcat();
//	test_strcpy();
//	test_isupper();
//	test_islower();
//	test_isalpha();
//	test_toupper();
//	test_tolower();
//	test_puts();
//	test_strlen();
//	test_memset();
//	test_memcpy();
//	test_strdup();

	return (0);
}
