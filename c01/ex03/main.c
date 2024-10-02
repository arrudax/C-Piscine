/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:56:35 by maanton2          #+#    #+#             */
/*   Updated: 2024/08/20 15:18:35 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	mod;
	int	div;

	a = 10;
	b = 2;
	
	ft_div_mod(a, b, &div, &mod);
	printf("div: %i\n", div);
	printf("mod: %i\n", mod);
	return(0);
}

