/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroemer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 09:45:11 by aroemer           #+#    #+#             */
/*   Updated: 2015/11/29 16:28:24 by aroemer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *copy;

	copy = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (copy)
		ft_strcpy(copy, s1);
	return (copy);
}
