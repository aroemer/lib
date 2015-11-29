/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroemer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:56:54 by aroemer           #+#    #+#             */
/*   Updated: 2015/11/29 16:07:12 by aroemer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*b;
	unsigned char	*a;

	i = 0;
	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	while (i < n)
	{
		a[i] = b[i];
		i++;
		if (b[i] == (unsigned char)c)
		{
			a[i] = '\0';
			return (&a[i + 1]);
		}
	}
	a[i] = '\0';
	return (NULL);
}
