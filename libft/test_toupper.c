/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroemer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:11:55 by aroemer           #+#    #+#             */
/*   Updated: 2015/11/25 15:17:57 by aroemer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c);

int main()
{
	char c;

	c='m';
	printf("%c",ft_toupper(c));
	c='D';
	printf("\n%c",ft_toupper(c));
	c='9';
	printf("\n%c",ft_toupper(c));
	c='|';
	printf("\n%c", ft_toupper(c));
	return (0);
}
