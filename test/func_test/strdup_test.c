/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 23:16:51 by ddinaut           #+#    #+#             */
/*   Updated: 2018/02/21 23:18:20 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void	test_strdup(void)
{
	char	*t1;
	char	*t2;
	char	*t3;
	char	*t4;
	char	*t5;

	t1 = ft_strdup("test");
	t2 = ft_strdup("Hello World");
	t3 = ft_strdup("coucou ca fonctionne!");
	t4 = ft_strdup("yes c'est parfait");
	t5 = ft_strdup("");

	printf("s1: %s\ns2: %s\ns3: %s\ns4: %s\nt5: %s\n", t1, t2, t3, t4, t5);

	free(t1);
	free(t2);
	free(t3);
	free(t4);
	free(t5);
}
