/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isotherwhitespace.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embektur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 21:38:23 by embektur          #+#    #+#             */
/*   Updated: 2019/11/12 21:38:36 by embektur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isotherwhitespace(char c)
{
	return (c == '\v' || c == '\f' || c == '\r');
}
