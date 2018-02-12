/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zero.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 09:33:34 by ddinaut           #+#    #+#             */
/*   Updated: 2018/02/12 21:06:37 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *str, int len)
{
	int count;
	char *tmp;

	count = 0;
	tmp = str;
	while (count < len)
		tmp[count++] = '\0';
}

int main(void)
{
	char	*str;

	str = malloc(15);
	ft_bzero(str, 14);
	return (0);
}
