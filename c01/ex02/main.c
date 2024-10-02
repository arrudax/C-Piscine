/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:31:13 by maanton2          #+#    #+#             */
/*   Updated: 2024/08/20 14:52:39 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;
	// int *ptr_a;
	// int *ptr_b;
	
	a = 0;
	b = 2;
	// ptr_a = &a;
	// ptr_b = &b;
	printf("a: %i\n", a);
	printf("b: %i\n", b);
	ft_swap(&a, &b);
	printf("a: %i\n", a);
	printf("b: %i\n", b);
	return(0);
}

/*
a end 001
a valor 0
ptr_a end 478
ptr_a valor 001 -> 0
*ptr_a = 0
swap(&a ou ptr_a)
['A','m','a','n','d','a','\0']
001 , 002, 003, 004, 005, 006, 007


 */