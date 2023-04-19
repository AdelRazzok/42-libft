#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	str = malloc(sizeof(*str) * len + 1);
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] && i < start)
		i++;
	while (s[i] && j < len)
	{
		str[j] = s[i];
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
}