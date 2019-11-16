/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embektur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 19:06:07 by embektur          #+#    #+#             */
/*   Updated: 2019/11/13 19:06:16 by embektur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dest, const char *source, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (*(source + i))
		{
			*(dest + i) = *(source + i);
		}
		else
		{
			while (i < len)
			{
				*(dest + i) = '\0';
				i++;
			}
		}
		i++;
	}
	return (dest);
}
