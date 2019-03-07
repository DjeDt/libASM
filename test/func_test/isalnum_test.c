#include "../test.h"

void	isalnum_test(void)
{
	int ret = 0;
	int ret2 = 0;
	int ret3 = 0;
	int ret4 = 0;

	ret = ft_isalnum('a');
	ret2 = ft_isalnum('z');
	ret3 = ft_isalnum('A');
	ret4 = ft_isalnum('Z');
	printf("mine:\t[a]: %d\t[z]: %d\t[A]: %d\t[Z]: %d\n", ret, ret2, ret3, ret4);

	ret = isalnum('a');
	ret2 = isalnum('a');
	ret3 = isalnum('A');
	ret4 = isalnum('Z');
	printf("real:\t[a]: %d\t[z]: %d\t[A]: %d\t[Z]: %d\n", ret, ret2, ret3, ret4);

	printf("\n");

	ret = ft_isalnum('1');
	ret2 = ft_isalnum('%');
	ret3 = ft_isalnum(' ');
	ret4 = ft_isalnum('\0');
	printf("mine:\t[1]: %d\t[%%]: %d\t[ ]: %d\t[\\0]: %d\n", ret, ret2, ret3, ret4);

	ret = isalnum('1');
	ret2 = isalnum('2');
	ret3 = isalnum(' ');
	ret4 = isalnum('\0');
	printf("mine:\t[1]: %d\t[%%]: %d\t[ ]: %d\t[\\0]: %d\n", ret, ret2, ret3, ret4);
}
