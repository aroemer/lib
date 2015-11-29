/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroemer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 10:35:50 by aroemer           #+#    #+#             */
/*   Updated: 2015/11/26 15:41:13 by aroemer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int sign;

	sign = 0;
	while (*str == '\v' || *str == '\t' || *str == '\f' || *str == '\n'
			*str == '\r' || *str == ' ')
		str++;