/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thruiz <thruiz@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 19:09:43 by thruiz            #+#    #+#             */
/*   Updated: 2026/10/16 00:41:47 by thruiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	character;
	char	*text;

	character = 'c';
	text = "poulet";
	if (ft_isalpha(character))
		printf("ft_isalpha(%c) = IS ALPHA\n", character);
	else
		printf("ft_isalpha(%c) = IS NOT ALPHA\n", character);
	character = '1';
	if (ft_isdigit(character))
		printf("ft_isdigit(%c) = IS DIGIT\n", character);
	else
		printf("ft_isdigit(%c) = IS NOT DIGIT\n", character);
	character = '<';
	if (ft_isalnum(character))
		printf("ft_isalnum(%c) = IS ALNUM\n", character);
	else
		printf("ft_isalnum(%c) = IS NOT ALNUM\n", character);
	character = '}';
	if (ft_isascii(character))
		printf("ft_isascii(%c) = IS ASCII\n", character);
	else
		printf("ft_isascii(%c) = IS NOT ASCII\n", character);
	character = 32;
	if (ft_isprint(character))
		printf("ft_isprint(%c) = IS PRINT\n", character);
	else
		printf("ft_isprint(%c) = IS NOT PRINT\n", character);
	printf("ft_strlen(%s) = %d", text, ft_strlen(text));
}
