#include "libft.h"

int	main(void)
{
	int n1 = 1234;
	int n2 = -5678;
	int n3 = 0;
	int n4 = -2147483648;
	int n5 = 2147483647;

	char *s1 = ft_itoa(n1);
	char *s2 = ft_itoa(n2);
	char *s3 = ft_itoa(n3);
	char *s4 = ft_itoa(n4);
	char *s5 = ft_itoa(n5);

	printf("n1 = %d, s1 = %s\n", n1, s1);
	printf("n2 = %d, s2 = %s\n", n2, s2);
	printf("n3 = %d, s3 = %s\n", n3, s3);
	printf("n4 = %d, s4 = %s\n", n4, s4);
	printf("n5 = %d, s5 = %s\n", n5, s5);

	free(s1);
	free(s2);
	free(s3);
	free(s4);
	free(s5);

	return (0);
}