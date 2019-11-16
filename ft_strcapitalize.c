/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embektur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 18:38:33 by embektur          #+#    #+#             */
/*   Updated: 2019/11/13 18:38:37 by embektur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strcapitalize(char *s)
{
	int		i;

	i = 0;
	s[i] = ft_toupper(s[i]);
	while (s[++i])
	{
		s[i] = ft_tolower(s[i]);
		if (!ft_isalnum(s[i - 1]))
			s[i] = ft_toupper(s[i]);
	}
	return (s);
}
