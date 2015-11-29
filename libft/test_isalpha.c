/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroemer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 12:28:42 by aroemer           #+#    #+#             */
/*   Updated: 2015/11/25 15:20:23 by aroemer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isalpha(int c);

int	main(void)
{
	char c;
	printf("Enter a char: ");
	scanf("%c", &c);
	if (ft_isalpha(c) == 0)
		printf("%c is not an alphabet.", c);
	else
		printf("%c is an alphabet.", c);
	return (0);
}
