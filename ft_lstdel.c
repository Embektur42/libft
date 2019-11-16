/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embektur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 21:53:33 by embektur          #+#    #+#             */
/*   Updated: 2019/11/12 21:54:11 by embektur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **list, void (*del)(void *, size_t))
{
	if ((*list)->next)
		ft_lstdel(&(*list)->next, del);
	ft_lstdelone(&(*list), del);
}
