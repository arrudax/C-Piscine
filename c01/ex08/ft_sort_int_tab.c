/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:54:43 by maanton2          #+#    #+#             */
/*   Updated: 2024/08/21 22:12:04 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	ilast;
	int	temp;

	i = 0;
	ilast = size - 1;
	while (i < ilast)
	{
		while (i < ilast)
		{
			if (tab[i] > tab[ilast])
			{
				temp = tab[i];
				tab[i] = tab[ilast];
				tab[ilast] = temp;
			}
			ilast--;
		}
		ilast = size -1;
		i++;
	}
}
