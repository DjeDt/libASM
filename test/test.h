/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 18:21:56 by ddinaut           #+#    #+#             */
/*   Updated: 2018/02/26 11:22:41 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		TEST_H
# define	TEST_H

#include	<stdio.h>
#include	<ctype.h>
#include	<string.h>
#include	<stdlib.h>
#include	<unistd.h>

/*	Test func	*/

void	test_strcat(void);
void	test_isupper(void);
void	test_islower(void);
void	test_isalpha(void);
void	test_toupper(void);
void	test_tolower(void);
void	test_isdigit(void);

void	test_puts(void);
void	test_strlen(void);
void	test_memset(void);
void	test_memcpy(void);
void	test_bzero(void);
void	test_strdup(void);
void	test_strcpy(void);

/*	libASM func	*/

int		ft_isupper(int c);
int		ft_islower(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

void	ft_puts(const char *str);
int		ft_strlen(const char *str);
void	ft_bzero(void *s, unsigned int i);
char	*ft_strdup(const char *s);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strcpy(char *s1, const char *s2);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);

#endif
