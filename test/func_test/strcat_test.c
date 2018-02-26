/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 19:09:51 by ddinaut           #+#    #+#             */
/*   Updated: 2018/02/26 11:14:38 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

#define LEN 10

void	test_strcat(void)
{
	char	*s1 = NULL;
	char	*s2 = NULL;

	s1 = malloc(LEN);
	s2 = malloc(LEN);
	ft_bzero(s1, LEN);
	ft_bzero(s2, LEN);


	printf("Test [1] : should print [This is a success !] : \n");
	ft_strcat(s1, "This is");
	ft_strcat(s2, "a success !");
	printf("-> [%s %s]\n", s1, s2);


	printf("Test [2] : should print [Hello World!] :\n");
	ft_bzero(s1, LEN);
	ft_bzero(s2, LEN);
	ft_strcat(s1, "Hello ");
	ft_strcat(s2, "World!");
	printf("-> [%s%s]\n", s1, s2);


	printf("Test [3] : should print [Hello World!] again :\n");
	char	*s3 = NULL;
	s3 = ft_strcat(s1, s2);
	printf("-> [%s]\n", s3);
}
