/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldurosi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 20:13:42 by oldurosi          #+#    #+#             */
/*   Updated: 2019/10/18 22:32:32 by oldurosi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int get_next_line(const int fd, char **line)
{
    char    buff[BUFF_SIZE + 1];
    char    *temp;
    static char *s[MAXFD];
    ssize_t     ret;

    if (!(fd && line) || (fd < 0 || line == NULL) || fd > MAXFD)
        return (-1);
    while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
    {
        buff[ret] = '\0';
        // if (*s == NULL)
        // {
        //     *s = ft_strdup(buff);
        // }
        // else
        // {

        // }
        // //printf("\n%s", buff);
        // if ((temp = ft_strchr(buff, '\n')))
        // {
        //     *((temp + 1)) = '\0';
        // }
        // else
        // {
        //     /* code */
        // }
        
        if (*line == NULL)
        {
            *line = ft_strdup(buff);
        }
        else
        {
            *line = ft_strjoin(*line, buff);

        }
        return (1);        
    }
    return (0);
}
