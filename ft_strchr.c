/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 19:23:10 by dchen             #+#    #+#             */
/*   Updated: 2019/02/22 21:17:59 by dchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char c2;

	c2 = (char)c;
	while (*s != c2)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}
