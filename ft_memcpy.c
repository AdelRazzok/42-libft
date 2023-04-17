#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	unsigned char		*dst_ptr;
	const unsigned char	*src_ptr;
	size_t				i;

	dst_ptr = (unsigned char *)dst;
	src_ptr = (const unsigned char *)src;
	i = 0;
	if (!dst_ptr || !src_ptr)
		return (NULL);
	while (i < size)
	{
		dst_ptr[i] = src_ptr[i];
		i++;
	}
	return (dst);
}