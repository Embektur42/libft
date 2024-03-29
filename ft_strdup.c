/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embektur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 18:45:37 by embektur          #+#    #+#             */
/*   Updated: 2019/11/13 18:45:46 by embektur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strdup(const char *s1)
{
	size_t	mem_space;
	char	*s2;
	char	*res;

	mem_space = ft_strlen(s1) + 1;
	s2 = (char *)malloc(mem_space);
	if (s2 == NULL)
		return (NULL);
	if (!(res = (char *)ft_memcpy(s2, s1, mem_space)))
	{
		free(s2);
		return (NULL);
	}
	return (res);
}
