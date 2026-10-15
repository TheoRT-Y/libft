/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thruiz <thruiz@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 19:09:43 by thruiz            #+#    #+#             */
/*   Updated: 2026/10/16 00:26:37 by thruiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	text;

	text = 'c';
	if (ft_isalpha(text))
		printf("ft_isalpha(%c) = IS ALPHA\n", text);
	else
		printf("ft_isalpha(%c) = IS NOT ALPHA\n", text);
	text = '1';
	if (ft_isdigit(text))
		printf("ft_isdigit(%c) = IS DIGIT\n", text);
	else
		printf("ft_isdigit(%c) = IS NOT DIGIT\n", text);
	text = '<';
	if (ft_isalnum(text))
		printf("ft_isalnum(%c) = IS ALNUM\n", text);
	else
		printf("ft_isalnum(%c) = IS NOT ALNUM\n", text);
	text = '}';
	if (ft_isascii(text))
		printf("ft_isascii(%c) = IS ASCII\n", text);
	else
		printf("ft_isascii(%c) = IS NOT ASCII\n", text);
	text = 32;
	if (ft_isprint(text))
		printf("ft_isprint(%c) = IS PRINT\n", text);
	else
		printf("ft_isprint(%c) = IS NOT PRINT\n", text);
}
