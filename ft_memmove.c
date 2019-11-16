/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embektur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 22:10:37 by embektur          #+#    #+#             */
/*   Updated: 2019/11/15 02:26:24 by embektur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*dst2;
	const unsigned char	*src2;

	dst2 = (unsigned char*)dst;
	src2 = (unsigned char*)src;
	i = 0;
	if (!dst2 && !src2)
		return (NULL);
	if (src2 < dst2)
		while (++i <= len)
			dst2[len - i] = src2[len - i];
	else
		while (len-- > 0)
			*(dst2++) = *(src2++);
	return (dst);
}
