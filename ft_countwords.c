/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embektur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 21:29:32 by embektur          #+#    #+#             */
/*   Updated: 2019/11/12 21:29:49 by embektur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countwords(char const *str, char c)
{
	size_t	count;
	int		inside_a_word;

	inside_a_word = 0;
	count = 0;
	while (*str)
	{
		if (!inside_a_word && *str != c)
			count++;
		inside_a_word = (*str == c) ? 0 : 1;
		str++;
	}
	return (count);
}
