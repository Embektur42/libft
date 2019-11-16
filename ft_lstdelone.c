/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embektur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 21:54:58 by embektur          #+#    #+#             */
/*   Updated: 2019/11/12 21:55:18 by embektur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void				ft_lstdelone(t_list **list, void (*del)(void *, size_t))
{
	del((*list)->content, (*list)->content_size);
	free(*list);
	*list = NULL;
}
