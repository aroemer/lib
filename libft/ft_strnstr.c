/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroemer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 17:50:44 by aroemer           #+#    #+#             */
/*   Updated: 2015/11/29 18:17:22 by aroemer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	while (n > 0)
	{
		if (*s2 == '\0')
					return ((char *)s1);
		ft_strstr(s1, s2);
		n--;
	}
	return (NULL);
}
