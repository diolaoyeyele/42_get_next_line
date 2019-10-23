/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_multi_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldurosi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 00:09:03 by oldurosi          #+#    #+#             */
/*   Updated: 2019/10/23 00:09:15 by oldurosi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"

int main(int argc, char **argv)
{
    int fd;
    char *line;
    if (argc == 1)
        fd = 0;
    else if (argc > 1)
	{
		int i = 1;
		while (argv[i])
		{
			fd = open((argv[i]),O_RDONLY);
			while (get_next_line(fd, &line))
				ft_putendl(line);
			close(fd);
			i++;
		}
	}
    return (0);
}

