#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	if (!dst || !src)
		return (0);
	src_len = ft_strlen(src);
	if (src_len <= 0)
		return (src_len);
	i = 0;
	while (dst[i])
		i++;
	dst_len = i;
	while (src[i - dst_len] && i < size - 1)
	{
		dst[i] = src[i - dst_len];
		i++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}

#include <stdio.h>
#include <string.h>

int main()
{
	char src[100] = "Hello, world!";
	char dest[100];
	size_t res;

	// Test 1: Basic functionality
	res = ft_strlcat(dest, src, sizeof(dest));
	if (strcmp(dest, "Hello, world!") != 0 || res != 13)
		printf("Test 1 failed\n");
	else
		printf("Test 1 passed\n");

	// Test 2: Destination string too small
	memset(dest, 0, sizeof(dest));
	res = ft_strlcat(dest, src, 5);
	if (strcmp(dest, "Hello") != 0 || res != 13)
		printf("Test 2 failed\n");
	else
		printf("Test 2 passed\n");

	// Test 3: Source string empty
	memset(dest, 0, sizeof(dest));
	memset(src, 0, sizeof(src));
	res = ft_strlcat(dest, src, sizeof(dest));
	if (strcmp(dest, "") != 0 || res != 0)
		printf("Test 3 failed\n");
	else
		printf("Test 3 passed\n");

	// Test 4: Destination and source strings empty
	memset(dest, 0, sizeof(dest));
	memset(src, 0, sizeof(src));
	res = ft_strlcat(dest, src, 5);
	if (strcmp(dest, "") != 0 || res != 0)
		printf("Test 4 failed\n");
	else
		printf("Test 4 passed\n");

	// Test 5: Source string with one character
	memset(dest, 0, sizeof(dest));
	strcpy(src, "a");
	res = ft_strlcat(dest, src, sizeof(dest));
	if (strcmp(dest, "a") != 0 || res != 1)
		printf("Test 5 failed\n");
	else
		printf("Test 5 passed\n");

	// Test 6: Destination string with one character
	memset(dest, 0, sizeof(dest));
	strcpy(src, "Hello, world!");
	res = ft_strlcat(dest, src, 2);
	if (strcmp(dest, "H") != 0 || res != 13)
		printf("Test 6 failed\n");
	else
		printf("Test 6 passed\n");

	return (0);
}