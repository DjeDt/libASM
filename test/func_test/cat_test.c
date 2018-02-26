/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 12:17:35 by ddinaut           #+#    #+#             */
/*   Updated: 2018/02/26 15:53:39 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

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
}
