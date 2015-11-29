/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroemer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 10:26:04 by aroemer           #+#    #+#             */
/*   Updated: 2015/11/29 17:50:05 by aroemer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen((char *)s) - 1;
	while (s[i] != c)
		s--;
	if (*s == c)
		return ((char *)s);
	return (NULL);
}
