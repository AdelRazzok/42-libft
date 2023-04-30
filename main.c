#include "libft.h"

int main()
{
    char *s = "Hello world! This is a test.";
    char c = ' ';
    char **tab = ft_split(s, c);
    if (!tab)
    {
        printf("Error: allocation failed\n");
        return (1);
    }
    for (int i = 0; tab[i]; i++)
        printf("%s\n", tab[i]);
    return (0);
}