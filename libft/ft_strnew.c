/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroemer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:37:55 by aroemer           #+#    #+#             */
/*   Updated: 2015/11/29 12:59:02 by aroemer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	size_t	i;
	char	*s;

	i = 0;
	s = NULL;
	s = (char *)malloc(sizeof(char) * size + 1);
	if (s)
	{
		while (i <= size)
		{
			s[i] = '\0';
			i++;
		}
	}
	return (s);
}
