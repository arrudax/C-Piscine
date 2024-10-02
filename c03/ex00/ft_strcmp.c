/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 06:41:56 by maanton2          #+#    #+#             */
/*   Updated: 2024/08/27 07:34:13 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*
#include<string.h>
#include<stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*s1 = "azple";
	char	*s2 = "apple";
	char	*s3 = "nishumura";
	int	result1;
	int	result2;
	int	result3;
	int	result4;

	result1 = strcmp(s1, s2);
	result2 = strcmp(s1, s3);
	result3 = ft_strcmp(s1, s2);
        result4 = ft_strcmp(s1, s3);
	printf("Comp og 1: %d\n", result1);
	printf("Comp og 2: %d\n", result2);
	printf("Comp 3: %d\n", result3);
	printf("Comp 4: %d\n", result4);
	return (0);
}

*/