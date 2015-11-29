/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroemer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 12:48:45 by aroemer           #+#    #+#             */
/*   Updated: 2015/11/29 12:54:25 by aroemer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memalloc(size_t size)
{
	unsigned char	*a;
	size_t			i;

	i = 0;
	a = NULL;
	a = (unsigned char *)malloc(size);
	if (a)
	{
		while (i < size)
		{
			a[i] = 0;
			i++;
		}
	}
	return ((void *)a);
}
