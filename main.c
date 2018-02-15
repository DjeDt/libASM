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
#include <string.h>
#include <stdlib.h>


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
int	ft_strlen(char *str);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, void *src, size_t n);
char	*ft_strdup(char *s);


void	test_bzero(void)
{
	char test[10] = {101, 101,101,101,101,101,101,101,101,101,};
	ft_bzero(test, 10);

    printf("%d\n", test[0]);
    printf("%d\n", test[1]);
    printf("%d\n", test[2]);
    printf("%d\n", test[3]);
    printf("%d\n", test[4]);
    printf("%d\n", test[5]);
    printf("%d\n", test[6]);
    printf("%d\n", test[7]);
    printf("%d\n", test[8]);
    printf("%d\n", test[9]);
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

void	test_puts(void)
{
	ft_puts("test\n");
	ft_puts("");
	ft_puts("puts is working hard\n");
	ft_puts("Hello World!\n\0");
}

void	test_strlen(void)
{
	int	ret;
	int	ret2;

	ret = ft_strlen("test");
	ret2 = strlen("test");
	printf("ret = %d %d\n", ret, ret2);

	ret = ft_strlen("\0");
	ret2 = strlen("\0");
	printf("ret = %d %d\n", ret, ret2);

	ret = ft_strlen("Hello World!\n\0");
	ret2 = strlen("Hello World!\n\0");
	printf("ret = %d %d\n", ret, ret2);

	ret = ft_strlen("testatest");
	printf("%d\n", ret);
}

void	test_memset(void)
{
	char	*test;
	int	len = 10;
	
	test = malloc(len);
	test = ft_memset(test, 'v', len);

	printf("%d ", test[0]);
	printf("%d ", test[1]);
	printf("%d ", test[2]);
	printf("%d ", test[3]);
	printf("%d ", test[4]);
	printf("%d ", test[5]);
	printf("%d ", test[6]);
	printf("%d ", test[7]);
	printf("%d ", test[8]);
	printf("%d\n", test[9]);


	test = ft_memset(test, 'O', len);

	printf("%d ", test[0]);
	printf("%d ", test[1]);
	printf("%d ", test[2]);
	printf("%d ", test[3]);
	printf("%d ", test[4]);
	printf("%d ", test[5]);
	printf("%d ", test[6]);
	printf("%d ", test[7]);
	printf("%d ", test[8]);
	printf("%d\n", test[9]);


	test = ft_memset(test, '\0', len);

	printf("%d ", test[0]);
	printf("%d ", test[1]);
	printf("%d ", test[2]);
	printf("%d ", test[3]);
	printf("%d ", test[4]);
	printf("%d ", test[5]);
	printf("%d ", test[6]);
	printf("%d ", test[7]);
	printf("%d ", test[8]);
	printf("%d\n", test[9]);


	test = ft_memset(test, 'a', len);

	printf("%d ", test[0]);
	printf("%d ", test[1]);
	printf("%d ", test[2]);
	printf("%d ", test[3]);
	printf("%d ", test[4]);
	printf("%d ", test[5]);
	printf("%d ", test[6]);
	printf("%d ", test[7]);
	printf("%d ", test[8]);
	printf("%d\n", test[9]);

	free(test);
}

void	test_memcpy(void)
{
	char	dst[11];
	char	src[11];
	
	ft_bzero(dst, 11);
	ft_bzero(src, 11);

	ft_memset(src, 'b', 10);
	ft_memcpy(dst, src, 10);
	write(1, dst, 10);
}

void	test_strdup(void)
{
	char	*t1;
	char	*t2;
	char	*t3;
	
	t1 = ft_strdup("test");
	t2 = ft_strdup("Hello World");
	t3 = ft_strdup("coucou ca fonctionne!");
	printf("s1: %s\ns2: %s\ns3: %s\n", t1, t2, t3);
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
//	test_puts();
//	test_strlen();
//	test_memset();
//	test_memcpy();
	test_strdup();
	return (0);
}
