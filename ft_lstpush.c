/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embektur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 22:01:49 by embektur          #+#    #+#             */
/*   Updated: 2019/11/12 22:02:02 by embektur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_lstpush(t_list **list, t_list *element)
{
	t_list *curr;
	t_list *head;

	head = *list;
	curr = head;
	while (curr->next)
		curr = curr->next;
	curr->next = element;
	*list = head;
}
