/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:29:53 by maanton2          #+#    #+#             */
/*   Updated: 2024/08/15 19:11:28 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_comb(int first_number, int second_number, int third_number)
{
	ft_putchar(first_number);
	ft_putchar(second_number);
	ft_putchar(third_number);
	if (first_number == 55 && second_number == 56 && third_number == 57)
		return ;
	write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	first_number;
	int	second_number;
	int	third_number;

	first_number = 48;
	while (first_number <= 55)
	{
		second_number = first_number + 1;
		while (second_number <= 56)
		{
			third_number = second_number + 1;
			while (third_number <= 57)
			{
				ft_comb(first_number, second_number, third_number);
				third_number++;
			}
			second_number++;
		}
		first_number++;
	}
}
