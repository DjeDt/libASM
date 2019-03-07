#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#include "libasm.h"

static void	test_isalpha(void)
{
	int r;

//	r = rand() % 15;
	r = 15;
	printf("ISALPHA TEST:\n");
	while (r--)
	{
		printf("real:\t%d\n", ft_isupper('a'));
		printf("mine:\t%d\n", isupper('a'));
	}
	printf("\n");
}

int main(void)
{
//	rand(time(NULL));
	test_isalpha();
	return (0);
}
