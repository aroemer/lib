/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroemer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:03:09 by aroemer           #+#    #+#             */
/*   Updated: 2015/11/29 15:49:40 by aroemer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}
