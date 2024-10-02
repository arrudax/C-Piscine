/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 14:51:05 by maanton2          #+#    #+#             */
/*   Updated: 2024/08/18 14:51:16 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_line(int cont_x, int x, int cont_y, int y)
{
	while (cont_x < x)
	{	
		if (cont_y == 0 || cont_y == y -1)
		{
			if (cont_x == 0 || cont_x == x -1)
				ft_putchar('o');
			else
				ft_putchar ('-');
		}
		else
		{
			if (cont_x == 0 || cont_x == x -1)
				ft_putchar('|');
			else
				ft_putchar(' ');
		}
		cont_x++;
	}
}

void	rush(int x, int y)
{
	int	cont_x;
	int	cont_y;	

	cont_y = 0;
	cont_x = 0;
	if (x < 0 || y < 0)
	{
		write(1, "Somente numeros positivos!", 26);
		return ;
	}
	while (cont_y < y)
	{
		ft_print_line(cont_x, x, cont_y, y);
		ft_putchar('\n');
		cont_x = 0;
		cont_y++;
	}
}
