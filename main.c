/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thruiz <thruiz@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 19:09:43 by thruiz            #+#    #+#             */
/*   Updated: 2026/10/15 19:15:01 by thruiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	text;

	text = 'c';
	if (ft_isalpha(text))
		printf("ft_isalpha(%c) = IS ALPHA", text);
	else
		printf("ft_isalpha(%c) = IS NOT ALPHA", text);
}
