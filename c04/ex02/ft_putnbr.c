/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:47:35 by maanton2          #+#    #+#             */
/*   Updated: 2024/09/04 18:32:51 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_rev_int_tab(char *tab, int size)
{
	int	iterator;
	int	iterator_reverse;
	int	temp;

	iterator = 0;
	iterator_reverse = size -1;
	if (size <= 0)
		return ;
	while (iterator < iterator_reverse)
	{
		temp = tab[iterator];
		tab[iterator] = tab[iterator_reverse];
		tab[iterator_reverse] = temp;
		iterator++;
		iterator_reverse--;
	}
}

void	itoca(char *dest, long nb)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	if (nb < 0)
	{
		sign = -1;
		nb = -nb;
	}
	if (nb == 0)
	{
		dest[i++] = '0';
		dest[i] = '\0';
		return ;
	}
	while (nb > 0)
	{
		dest[i++] = '0' + (nb % 10);
		nb = nb / 10;
	}
	if (sign < 0)
		dest[i++] = '-';
	dest[i] = '\0';
}

void	ft_putnbr(int nb)
{
	char	r[12];
	int		size;

	itoca(r, nb);
	size = ft_strlen(r);
	ft_rev_int_tab(r, size);
	write(1, r, size);
}

// #include<stdio.h>
// #include<limits.h>
// int	main(void)
// {
// 	int i;
// 	i = -200;
// 	while (i <= 200)
// 	{
// 		ft_putnbr(i);
// 		write(1, "\n", 1);
// 		i++;
// 	}
// 	return (0);
// }