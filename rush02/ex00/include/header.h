/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 10:10:59 by bresanta          #+#    #+#             */
/*   Updated: 2024/09/02 10:13:34 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdbool.h>

# define LN_SIZE 300
# define DF_PATH "/nfs/homes/maanton2/ex/rush02/ex00/numbers.dict"

int		ft_strlen(char *str);
int		ft_validated(char *str);
bool	is_num(char c);
bool	is_space(char c);
bool	validate_arg(char *arg);
void	ft_putstr(char *str);
void	ft_read_ln(char *buff, int size, int fd);
int		get_num_lines(int fd);
int		ft_parse_dict(char *path);

#endif