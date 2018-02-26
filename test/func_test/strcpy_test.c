/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 11:18:12 by ddinaut           #+#    #+#             */
/*   Updated: 2018/02/26 11:24:19 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

#define LEN	20

void	test_strcpy(void)
{
	char	s1[LEN];
	char	*s2;

	if (!(s2 = (char*)malloc(sizeof(char) * LEN)))
		return ;
	ft_bzero(s1, LEN);
	ft_bzero(s2, LEN);

	ft_strcpy(s1, "Hello World!");
	s2  = ft_strcpy(s2, s1);

	printf("Should print 'Hello World!' 2 times :\n");

	printf("%s\n", s1);
	printf("%s\n", s2);
	free(s2);
}
