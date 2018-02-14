/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddinaut <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 14:39:59 by ddinaut           #+#    #+#             */
/*   Updated: 2018/02/14 14:58:02 by ddinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

void	ft_bzero(void *s, unsigned int i);
char	*ft_strcat(char *s1, char *s2);
char	*ft_strcpy(char *s1, char *s2);
int	ft_isupper(int c);
int	ft_islower(int c);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
void	ft_puts(char *str);

void	test_bzero(void)
{
	char test[10] = {101, 101,101,101,101,101,101,101,101,101,};
	ft_bzero(test, 10);

    printf("%c\n", test[0]);
    printf("%c\n", test[1]);
    printf("%c\n", test[2]);
    printf("%c\n", test[3]);
    printf("%c\n", test[4]);
    printf("%c\n", test[5]);
    printf("%c\n", test[6]);
    printf("%c\n", test[7]);
    printf("%c\n", test[8]);
    printf("%c\n", test[9]);
}

void	test_strcat(void)
{
	char	s1[14];

	ft_strcat(s1, "Hello World");
	printf("%s\n", s1);
}

void	test_strcpy(void)
{
	char	s1[15];
	
	ft_strcpy(s1, "Hello World\n\0");
	printf("%s", s1);
}

void	test_isupper(void)
{
	int ret;
	int ret2;
	
	ret = ft_isupper('A');
	ret2 = ft_isupper('Z');
	printf("1 = %d\n2 = %d\n", ret, ret2);
	ret = ft_isupper('z');
	ret2 = ft_isupper('1');
	printf("1 = %d\n2 = %d\n", ret, ret2);
	
	ret = isupper('A');
	ret2 = isupper('Z');
	printf("1 = %d\n2 = %d\n", ret, ret2);
	ret = isupper('a');
	ret2 = isupper('1');
	printf("1 = %d\n2 = %d\n", ret, ret2);
	
}

void	test_islower(void)
{
	int ret;
	int ret2;

	ret = ft_islower('a');
	ret2 = ft_islower('z');
	printf("mine: 1 = %d 2 = %d\n", ret, ret2);
	ret = islower('a');
	ret2 = islower('z');
	printf("real: 3 = %d 4 = %d\n", ret, ret2);

	ret = ft_islower('A');
	ret2 = ft_islower('1');
	printf("mine: 1 = %d 2 = %d\n", ret, ret2);
	ret = islower('A');
	ret2 = islower('1');
	printf("real: 1 = %d 2 = %d\n", ret, ret2);
}

void	test_isalpha(void)
{
	int ret;
	int ret2;
	int ret3;
	int ret4;

	ret = ft_isalpha('a');
	ret2 = ft_isalpha('z');
	ret3 = ft_isalpha('A');
	ret4 = ft_isalpha('Z');
	printf("mine:\t%d %d %d %d\n", ret, ret2, ret3, ret4);
	
	ret = isalpha('a');
	ret2 = isalpha('z');
	ret3 = isalpha('A');
	ret4 = isalpha('Z');
	printf("real:\t%d %d %d %d\n", ret, ret2, ret3, ret4);

	ret = ft_isalpha('1');
	ret2 = ft_isalpha('2');
	ret3 = ft_isalpha(' ');
	ret4 = ft_isalpha('\0');
	printf("mine:\t%d %d %d %d\n", ret, ret2, ret3, ret4);
	
	ret = isalpha('1');
	ret2 = isalpha('2');
	ret3 = isalpha(' ');
	ret4 = isalpha('\0');
	printf("real:\t%d %d %d %d\n", ret, ret2, ret3, ret4);
	
}

void	test_isdigit(void)
{
	int ret;
	int ret2;

	ret = ft_isdigit('0');
	ret2 = ft_isdigit('9');
	printf("mine: %d %d", ret, ret2);

	ret = isdigit('0');
	ret2 = isdigit('9');
	printf("real: %d %d", ret, ret2);

	ret = ft_isdigit(47);
	ret2 = ft_isdigit(58);
	printf("mine: %d %d", ret, ret2);

	ret = ft_isdigit(47);
	ret2 = ft_isdigit(58);
	printf("mine: %d %d", ret, ret2);
}

void	test_toupper(void)
{
	char c;
	char c2;
	
	c = 'a';
	c2 = 'a';
	c = ft_toupper(c);
	c2 = toupper(c2);
	printf("ret : %c %c\n", c, c2);

	c = 'b';
	c2 = 'b';
	c = ft_toupper(c);
	c2 = toupper(c2);
	printf("ret : %c %c\n", c, c2);
	
	c = 'Z';
	c2 = 'Z';
	c = ft_toupper(c);
	c2 = toupper(c2);
	printf("ret : %c %c\n", c, c2);
}

void	test_tolower(void)
{
	char c;
	char c2;
	
	c = 'A';
	c2 = 'A';
	c = ft_tolower(c);
	c2 = tolower(c2);
	printf("ret : %c %c\n", c, c2);
	
	c = 'Z';
	c2 = 'Z';
	c = ft_tolower(c);
	c2 = tolower(c2);
	printf("ret : %c %c\n", c, c2);

	c = 'b';
	c2 = 'b';
	c = ft_tolower(c);
	c2 = tolower(c2);
	printf("ret : %c %c\n", c, c2);
	
	c = 'j';
	c2 = 'j';
	c = ft_tolower(c);
	c2 = tolower(c2);
	printf("ret : %c %c\n", c, c2);
}

int	main(void)
{
//	test_bzero();
//	test_strcat();
//	test_strcpy();
//	test_isupper();
//	test_islower();
//	test_isalpha();
//	test_toupper();
//	test_tolower();
	ft_puts("");
	return (0);
}
