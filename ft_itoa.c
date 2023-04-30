#include "libft.h"

static int	ft_countdigits(int n)
{
	int len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		signe;

	signe = (n < 0) ? -1 : 1;
	len = ft_countdigits(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	while (len >= 0)
	{
		str[len--] = (n % 10) * signe + '0';
		n /= 10;
	}
	if (signe < 0)
		str[0] = '-';
	return (str);
}