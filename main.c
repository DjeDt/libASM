#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "libasm.h"

void	test_isupper(void)
{

	char c;

	printf("===========> isupper() tests:\n");
	c = 'A';
	printf("\treal:\t'%c' -> %d\n", c, ft_isupper(c));
	printf("\tmine:\t'%c' -> %d\n", c, isupper(c));
	c -= 1;
	printf("\treal:\t'%c' -> %d\n", c, ft_isupper(c));
	printf("\tmine:\t'%c' -> %d\n", c, isupper(c));
	printf("\n");

	c = 'Z';
	printf("\treal:\t'%c' -> %d\n", c, ft_isupper(c));
	printf("\tmine:\t'%c' -> %d\n", c, isupper(c));
	c += 1;
	printf("\treal:\t'%c' -> %d\n", c, ft_isupper(c));
	printf("\tmine:\t'%c' -> %d\n", c, isupper(c));
	printf("\n");
}


void	test_isalpha(void)
{
	char c;

	printf("===========> isalpha() tests:\n");
	c = 'A';
	printf("\treal:\t'%c' -> %d\n", c, ft_isalpha(c));
	printf("\tmine:\t'%c' -> %d\n", c, isalpha(c));\
	c -= 1;
	printf("\treal:\t'%c' -> %d\n", c, ft_isalpha(c));
	printf("\tmine:\t'%cF' -> %d\n", c, isalpha(c));
	printf("\n");

	c = 'Z';
	printf("\treal:\t'%c' -> %d\n", c, ft_isalpha(c));
	printf("\tmine:\t'%c' -> %d\n", c, isalpha(c));
	c += 1;
	printf("\treal:\t'%c' -> %d\n", c, ft_isalpha(c));
	printf("\tmine:\t'%c' -> %d\n", c, isalpha(c));
	printf("\n");

	c = 'a';
	printf("\treal:\t'%c' -> %d\n", c, ft_isalpha(c));
	printf("\tmine:\t'%c' -> %d\n", c, isalpha(c));
	c -= 1;
	printf("\treal:\t'%c' -> %d\n", c, ft_isalpha(c));
	printf("\tmine:\t'%c' -> %d\n", c, isalpha(c));
	printf("\n");

	c = 'z';
	printf("\treal:\t'%c' -> %d\n", c, ft_isalpha(c));
	printf("\tmine:\t'%c' -> %d\n", c, isalpha(c));
	c += 1;
	printf("\treal:\t'%c' -> %d\n", c, ft_isalpha(c));
	printf("\tmine:\t'%c' -> %d\n", c, isalpha(c));
	printf("\n");
}

void	test_isalnum(void)
{
	char c;

	printf("===========> isalnum() tests:\n");
	c = '0';
	printf("\treal:\t'%c' -> %d\n", c, ft_isalnum(c));
	printf("\tmine:\t'%c' -> %d\n", c, isalnum(c));

	c -= 1;
	printf("\treal:\t'%c' -> %d\n", c, ft_isalnum(c));
	printf("\tmine:\t'%c' -> %d\n", c, isalnum(c));
	printf("\n");

	c = '9';
	printf("\treal:\t'%c' -> %d\n", c, ft_isalnum(c));
	printf("\tmine:\t'%c' -> %d\n", c, isalnum(c));
	c += 1;
	printf("\treal:\t'%c' -> %d\n", c, ft_isalnum(c));
	printf("\tmine:\t'%c' -> %d\n", c, isalnum(c));
	printf("\n");


	c = 'A';
	printf("\treal:\t'%c' -> %d\n", c, ft_isalnum(c));
	printf("\tmine:\t'%c' -> %d\n", c, isalnum(c));
	c -= 1;
	printf("\treal:\t'%c' -> %d\n", c, ft_isalnum(c));
	printf("\tmine:\t'%c' -> %d\n", c, isalnum(c));
	printf("\n");

	c = 'Z';
	printf("\treal:\t'%c' -> %d\n", c, ft_isalnum(c));
	printf("\tmine:\t'%c' -> %d\n", c, isalnum(c));
	c += 1;
	printf("\treal:\t'%c' -> %d\n", c, ft_isalnum(c));
	printf("\tmine:\t'%c' -> %d\n", c, isalnum(c));
	printf("\n");

	c = 'a';
	printf("\treal:\t'%c' -> %d\n", c, ft_isalnum(c));
	printf("\tmine:\t'%c' -> %d\n", c, isalnum(c));
	c -= 1;
	printf("\treal:\t'%c' -> %d\n", c, ft_isalnum(c));
	printf("\tmine:\t'%c' -> %d\n", c, isalnum(c));
	printf("\n");

	c = 'z';
	printf("\treal:\t'%c' -> %d\n", c, ft_isalnum(c));
	printf("\tmine:\t'%c' -> %d\n", c, isalnum(c));
	c += 1;
	printf("\treal:\t'%c' -> %d\n", c, ft_isalnum(c));
	printf("\tmine:\t'%c' -> %d\n", c, isalnum(c));
	printf("\n");
}

void	test_is(char *name, int(*real)(int c), int(*mine)(int c), char begin, int limit)
{

	if (name != NULL)
		printf("===========> %s() tests:\n", name);
	char c = begin;
	for (int i = 0 ; i < limit ; i++)
	{
		printf("'%c' :\t", c);
		if (real(c) == mine(c))
			printf("OK\n");
		else
		{
			printf("NOPE\n");
			return ;
		}
		c += 1;
	}
	printf("\n");
}

void	full_is(void)
{
	/* isalpha() */
	// uppercase
	test_is("isalpha", isalpha, ft_isalpha, 'a' - 1, 29);
	// lowercase
	test_is(NULL, isalpha, ft_isalpha, 'A' - 1, 29);

	/* isdigit() */
	test_is("isdigit", isdigit, ft_isdigit, '0' - 1, 12);

	/* isalnum() */
	// digit
	test_is("isalnum", isalnum, ft_isalnum, '0' - 1, 12);
	// uppercase
	test_is(NULL, isalnum, ft_isalnum, 'A' - 1, 29);
	// lowercase
	test_is(NULL, isalnum, ft_isalnum, 'a' - 1, 29);

	/* isascii() */
	test_is("isascii", isascii, ft_isascii, -1, 130);

	/* isprint() */
	test_is("isprint", isprint, ft_isprint, 31, 97);

	/* isupper() */
	test_is("isupper", isupper, ft_isupper, 'A' - 1, 29);

	/* islower() */
	test_is("islower", islower, ft_islower, 'a' - 1, 29);
}

void test_bzero(void)
{
	int size = 0xf;
	char c[size];

	printf("===========> bzero() tests:\n");
	ft_strcpy(c, "aaaaaaaaaaaaaaaa");
	printf("before:\t\t");
	for (int i = 0 ; i < size ; i++)
		printf("0x%x\t", c[i]);
	printf("\n");
	ft_bzero(c, size);
	printf("after: [%d]\t", size);
	for (int i = 0 ; i < size; i++)
		printf("0x%x\t", c[i]);
	printf("\n\n");


	ft_strcpy(c, "bbbbbbbbbbbbbbbb");
	printf("before:\t\t");
	for (int i = 0 ; i < size ; i++)
		printf("0x%x\t", c[i]);
	printf("\n");
	ft_bzero(c, 0x0);
	printf("after: [%d]\t", 0x0);
	for (int i = 0 ; i < size; i++)
		printf("0x%x\t", c[i]);
	printf("\n");

	printf("NULL str:\t");
	ft_bzero(NULL, 5);
	printf("OK\n");

	printf("size = 0:\t");
	ft_bzero(NULL, 0);
	printf("OK\n");
}

void	test_strcat(void)
{
	char	mine[64];

	printf("===========> strcat() tests:\n");
	ft_bzero(mine, 64);

	ft_strcat(mine, "Hello");
	printf("'Hello':\t");
	if (strcmp(mine, "Hello") != 0)
		printf("NOPE\n");
	else
		printf("OK\n");

	ft_strcat(mine, " World!");
	printf("'Hello World!':\t");
	if (strcmp(mine, "Hello World!") != 0)
		printf("NOPE\n");
	else
		printf("OK\n");
	printf("\n");
}

void	test_puts()
{
	printf("===========> puts() tests:\n");
	int		ret;
	int		puts_ret1;
	int		puts_ret2;
	int		out;
	int		p[2];
	char	buf[10000];

	out = dup(1);
	pipe(p);
	dup2(p[1], 1);
	puts_ret1 = ft_puts("aaa");
	puts_ret2 = ft_puts(NULL);
	dup2(out, 1);
	ret = read(p[0], buf, 10000);
	buf[ret] = 0;
	close(p[0]);
	close(p[1]);
	close(out);
	if (strcmp(buf, "aaa\n(null)\n") != 0)
		printf("NOPE\n");
	else
		printf("OK\n");
	printf("\n");
}

void	test_strlen(void)
{
	printf("===========> strlen() tests:\n");
	printf("test []:\t");
	if (strlen("") != ft_strlen(""))
		printf("NOPE\n");
	else
		printf("OK\n");

	printf("test [toto]:\t");
	if (strlen("toto") != ft_strlen("toto"))
		printf("NOPE\n");
	else
		printf("OK\n");

	printf("test [Hello World!]:\t");
	if (strlen("Hello World!") != ft_strlen("Hello World!"))
		printf("NOPE\n");
	else
		printf("OK\n");
	printf("\n");
}

void	test_memset(void)
{
	char	real[64] = {0};

	printf("===========> memset() tests:\n");
	printf("return value:\t");
	if (memset(real, 'a', 16) != ft_memset(real, 'a', 16))
		printf("NOPE\n");
	else
		printf("OK\n");

	printf("inserted value:\t");
	if (strcmp(real, "aaaaaaaaaaaaaaaa") != 0)
		printf("NOPE\n");
	else
		printf("OK\n");

	printf("return value:\t");
	if (memset(real, 'a', 63) != ft_memset(real, 'a', 63))
		printf("NOPE\n");
	else
		printf("OK\n");

	printf("inserted value:\t");
	if (strcmp(real, "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa") != 0)
		printf("NOPE\n");
	else
		printf("OK\n");
	printf("\n");
}

void	test_memcpy(void)
{
	printf("===========> memcpy() tests:\n");
	char	b1[100], b2[100];

	memset(b1, '!', 100);
	memset(b2, '?', 100);
	printf("test copy:\t");
	ft_memcpy(b1, b2, 100);
	if (memcmp(b1, b2, 100) != 0)
		printf("NOPE\n");
	else
		printf("OK\n");

	printf("test return:\t");
	if (ft_memcpy(b1, b2, 0) != b1)
		printf("NOPE\n");
	else
		printf("OK\n");
	printf("\n");
}

void	test_strdup(void)
{
	printf("===========> strdup() tests:\n");
	char *ptr;

	printf("[Hello] :\t");
	ptr = strdup("Hello");
	if (strcmp(ptr, "Hello") != 0)
		printf("NOPE\n");
	else
		printf("OK\n");
	free(ptr);

	printf("[World] :\t");
	ptr = strdup("World");
	if (strcmp(ptr, "World") != 0)
		printf("NOPE\n");
	else
		printf("OK\n");

	free(ptr);
	printf("[] :\t");
	ptr = strdup("");
	if (strcmp(ptr, "") != 0)
		printf("NOPE\n");
	else
		printf("OK\n");
	printf("\n");
}

void	test_cat(void)
{
	int fd;

	printf("opening 'main.c':\t");
	fd = open("./main.c", O_RDONLY);
	printf("%d\n", fd);
	if (fd == -1)
	{
		printf("NOPE\n");
		return ;
	}
	else
		printf("OK\n");
	ft_cat(fd);
	close(fd);
	ft_cat(-1);
}

void	test_memalloc(void)
{
	void	*ptr = NULL;

	printf("===========> ft_memalloc() tests:\n");
	ptr = ft_memalloc(10);
	if (ptr == NULL)
	{
		printf("malloc failed\n");
		return ;
	}
	memcpy(ptr, "Hello!", 5);
	printf("%s\n", ptr);
	free(ptr);
}

void	test_putchar(void)
{
	printf("===========> ft_putchar() tests:\n");
	ft_putchar('H');
	ft_putchar('e');
	ft_putchar('l');
	ft_putchar('l');
	ft_putchar('o');
	ft_putchar('!');
	ft_putchar('\n');
}

void	test_putstr(void)
{
	printf("===========> ft_putstr() tests:\n");
	ft_putstr("Hello World!\n");
}

void	test_putendl(void)
{
	printf("===========> ft_putendl() tests:\n");
	ft_putendl("Hello putendl");
}

void	test_strncpy(void)
{
	printf("===========> ft_strncpy() tests:\n");
	char	*ptr = NULL;
	size_t	size = 10;
	char	test[] = "it should be cut in the middle of the string";

	ptr = ft_memalloc(size);
	if (!ptr)
		return ;
	strncpy(ptr, test, 16);
	printf("%s\n", ptr);
	free(ptr);
}

void	first_part(void)
{
	full_is();
	test_bzero();
	test_strcat();
	test_puts();
}

void	second_part(void)
{
	test_strlen();
	test_memset();
	test_memcpy();
	test_strdup();
}

void	third_part(void)
{
	test_cat();
}

void	bonus_part(void)
{
	test_memalloc();
	test_putchar();
	test_putstr();
	test_putendl();
	test_strncpy();
}

int main(void)
{
//	first_part();
//	second_part();
//	third_part();
	bonus_part();
	return (0);
}
