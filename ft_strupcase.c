/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embektur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 21:12:42 by embektur          #+#    #+#             */
/*   Updated: 2019/11/13 21:12:50 by embektur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strupcase(char *s)
{
	int		i;

	i = -1;
	while (s[++i])
		s[i] = ft_toupper(s[i]);
	return (s);
}
