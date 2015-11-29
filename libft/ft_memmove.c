/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroemer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 13:13:56 by aroemer           #+#    #+#             */
/*   Updated: 2015/11/27 16:16:48 by aroemer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*b;
	unsigned char	*a;

	i = 0;
	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	if (b < a)
	{
		while (len > 0)
		{
			a[len - 1] = b[len - 1];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			a[i] = b[i];
			i++;
		}
	}
	return (dst);
}
