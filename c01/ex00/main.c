/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:43:37 by maanton2          #+#    #+#             */
/*   Updated: 2024/08/19 14:02:32 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int var;

	var = 0;
	ft_ft(&var);
	printf("%i\n", var);
	return (0);
}

/*
int *ptr; declaração de ponteiro, notado por (*), ponteiro n pode ser vazio
ptr = &var; então ponteiro quando está recebendo um valor de end não tem * (ptr = &var), 
*ptr = valor; quando queremos mudar o valor da variavel que o ponteiro aponta usamos o * antes do nome do ponteiro (*ptr = 42;)
o q é valor? 1, 2 10, 'A' 'b' "Amanda" ['A','m','a','n','d','a','\0'] ptr para 'A' || str[i] i = 0;
ele ta mudando o valor do end apontado: var = end 0001 valor 0 | *ptr = 10 | var = end 0001 valor 10
-------------- exem 00
int var;
int *ptr;

var = 0;
ptr = &var;	
ft_ft(ptr);

-------------- exem 01 
int var;

var = 0;
ft_ft(&var);


ft_ft(um ptr ou um end de uma var);

*/
