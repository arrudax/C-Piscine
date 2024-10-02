/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 20:50:53 by maanton2          #+#    #+#             */
/*   Updated: 2024/08/21 21:57:25 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	c = 0;
	int list[5] = {40, 20, 3, 4, 5}; 
	while(c < 5)
	{
		printf("%i ", list[c]);	
		c++;
	}
	printf("\n");	
	ft_sort_int_tab(list, 5);
	c = 0;
	printf("\n");	

	while(c < 5)
	{
		printf("%i ", list[c]);	
		c++;
	} 
       	return(0);
}


