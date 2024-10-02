/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:04:36 by maanton2          #+#    #+#             */
/*   Updated: 2024/09/03 16:51:12 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*
#include<string.h>
#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	*s1 = "é Amor";
	char	*s2 = "";
	char	*s3 = "apple";

	int	result1;
	int	result2;
	int	result3;
	int	result4;
	unsigned int	size;

	size = 10;
	result1 = strncmp(s1, s2, size);
	result2 = strncmp(s1, s3, size);
	result3 = ft_strncmp(s1, s2, size);
	result4 = ft_strncmp(s1, s3, size);
	printf("Comp og 1: %d\n", result1);
	printf("Comp og 2: %d\n", result2);
	printf("Comp 3: %d\n", result3);
	printf("Comp 4: %d\n", result4);
	return (0);
}
*/