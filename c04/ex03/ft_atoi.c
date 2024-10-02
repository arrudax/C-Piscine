/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:54:32 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/02 17:25:31 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<limits.h>

int	ft_isspace(char *str, int i)
{
	while (str[i] == 32 || (str[i] >= 7 && str[i] <= 13))
		i++;
	return (i);
}

int	ft_isnegative(char *str, int *i)
{
	int	sign_count;

	sign_count = 0;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			sign_count++;
		(*i)++;
	}
	if (sign_count % 2 == 0)
		sign_count = 1;
	else
		sign_count = -1;
	return (sign_count);
}

int	ft_isdigit(char *str, int i)
{
	int	dig;

	dig = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		dig = dig * 10 + (str[i] - '0');
		i++;
	}
	return (dig);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	i = ft_isspace(str, i);
	sign = ft_isnegative(str, &i);
	result = ft_isdigit(str, i);
	return (result * sign);
}
#include <stdio.h>
int	main(void)
{
	int	i;
	char	c[20]= "    ---+--+1234ab567";

	i = ft_atoi(c);
	printf("Lista:%i", i);
}
