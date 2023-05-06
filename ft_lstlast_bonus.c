#include "libft_bonus.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*el;

	if (!lst)
		return (NULL);
	el = lst;
	while (el->next != NULL)
		el = el->next;
	return (el);
}
