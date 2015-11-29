/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroemer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 12:05:38 by aroemer           #+#    #+#             */
/*   Updated: 2015/11/29 16:53:32 by aroemer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s2;

	i = 0;
	s2 = NULL;
	s2 = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (s2)
	{
		while (s[i] != '\0')
		{
			s2[i] = f(i, s[i]);
			i++;
		}
		s2[i] = '\0';
	}
	return (s2);
}
