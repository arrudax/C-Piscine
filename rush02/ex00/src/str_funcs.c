/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_funcs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 10:39:49 by bresanta          #+#    #+#             */
/*   Updated: 2024/09/01 18:07:57 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdlib.h>
#include "../include/header.h"

bool	is_num(char c)
{
	if ((c >= '0' && c <= '9'))
		return (true);
	return (false);
}

bool	is_space(char c)
{
	if ((c == ' ') || (c >= 9 && c <= 13))
		return (true);
	return (false);
}

bool	validate_arg(char *arg)
{
	if (ft_strlen(arg) == 0 || arg == NULL)
		return (false);
	while (*arg != '\0')
	{
		if (!is_num(*arg))
			return (false);
		arg++;
	}
	return (true);
}
