/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasecmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embektur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 18:39:25 by embektur          #+#    #+#             */
/*   Updated: 2019/11/13 18:39:34 by embektur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strcasecmp(const char *s1, const char *s2)
{
	int		i;

	if (!s1 || !s2)
		return (-1000);
	i = 0;
	while (s1[i] && s2[i] && ft_tolower(s1[i]) == ft_tolower(s2[i]))
		i++;
	return (ft_tolower((unsigned char)s1[i]) -
			ft_tolower((unsigned char)s2[i]));
}
