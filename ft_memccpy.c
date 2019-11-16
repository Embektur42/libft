/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embektur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 22:04:52 by embektur          #+#    #+#             */
/*   Updated: 2019/11/12 22:04:56 by embektur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *source, int c, size_t n)
{
	void	*p;

	p = ft_memchr(source, c, n);
	if (p == NULL)
	{
		ft_memcpy(dest, source, n);
		return (NULL);
	}
	ft_memcpy(dest, source, p - source + 1);
	return (dest + (p - source + 1));
}
