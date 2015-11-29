/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroemer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 13:13:13 by aroemer           #+#    #+#             */
/*   Updated: 2015/11/25 15:19:52 by aroemer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c);

int	ft_isalpha(int c);

int	ft_isalnum(int c);

int	main(void)
{
	char c;
	printf("Enter a char: ");
	scanf("%c", &c);
	if (ft_isalnum(c) == 0)
		printf("%c is not alphanumeric.", c);
	else
		printf("%c is alphanum.", c);
	return (0);
}
