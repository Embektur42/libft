/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embektur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 21:59:37 by embektur          #+#    #+#             */
/*   Updated: 2019/11/12 21:59:41 by embektur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*curr;
	t_list		*first;

	if (!lst)
		return (NULL);
	first = f(lst);
	curr = first;
	while (lst->next)
	{
		lst = lst->next;
		curr->next = f(lst);
		if (!(curr->next))
		{
			free(curr->next);
			return (NULL);
		}
		curr = curr->next;
	}
	return (first);
}
