/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroemer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 19:37:56 by aroemer           #+#    #+#             */
/*   Updated: 2015/11/29 16:50:47 by aroemer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmap(char const *s, char (*f)(char))
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
			s2[i] = f(s[i]);
			i++;
		}
		s2[i] = '\0';
	}
	return (s2);
}
