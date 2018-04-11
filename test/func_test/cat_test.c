/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 12:17:35 by ddinaut           #+#    #+#             */
/*   Updated: 2018/04/11 18:54:27 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

#include <limits.h>
void	test_cat(const char *path)
{
	int fd;

	fd = open(path, O_RDONLY);
	if (fd < 0)
	{
		printf("bad file descriptor");
		return ;
	}
	ft_cat(fd);

	ft_puts("---\n");
	ft_cat(-1);
	ft_puts("---\n");
	ft_cat(5);
	ft_puts("---\n");
	ft_cat(INT_MIN);
	ft_puts("---\n");
	ft_cat(INT_MAX);
	
}
