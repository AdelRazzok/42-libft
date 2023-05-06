#include "libft_bonus.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*el;
	int 	count;

	el = lst;
	count = 0;
	while (el)
	{
		el = el->next;
		count++;
	}
	return (count);
}