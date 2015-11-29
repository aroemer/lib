/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroemer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 10:56:23 by aroemer           #+#    #+#             */
/*   Updated: 2015/11/29 16:48:36 by aroemer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *s))
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		f(&s[i]);
		i++;
	}
}