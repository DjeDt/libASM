/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zero.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 09:33:34 by ddinaut           #+#    #+#             */
/*   Updated: 2018/02/13 13:31:11 by ddinaut          ###   ########.fr       */
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

char	*ft_strcat(char *s1, const char *s2)
{
	char			*ret;

	ret = s1;
	while ((*ret) != '\0')
		ret++;
	while ((*s2) != '\0')
		(*ret++) = (*s2++);
	(*ret) = '\0';
	return (ret);
}

int main(void)
{
	char	*str;

	str = malloc(15);
	ft_strcat(str, "okok");
	return (0);
}
