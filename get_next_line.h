/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldurosi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 20:13:49 by oldurosi          #+#    #+#             */
/*   Updated: 2019/10/18 22:33:09 by oldurosi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	GET_NEXT_LINE_H
# define	GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
#include <fcntl.h>
# define BUFF_SIZE 32
# define MAXFD 1024
// #define DCHECK(x) if(!x) return (-1);
#include "./libft/libft.h"

int get_next_line(const int fd, char **line);

#endif
