#include "libft_bonus.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*el;

	el = malloc(sizeof(*el));
	if (!el)
		return (NULL);
	el->content = content;
	el->next = NULL;
	return (el);
}
