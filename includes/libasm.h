/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 18:21:56 by ddinaut           #+#    #+#             */
/*   Updated: 2018/02/26 15:38:49 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		LIBASM_H
# define	LIBASM_H

int		ft_isupper(int c);
int		ft_islower(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
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
void	ft_cat(int fd);

#endif
