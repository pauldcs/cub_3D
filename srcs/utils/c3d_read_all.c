/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c3d_read_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducos <pducos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 21:15:21 by pducos            #+#    #+#             */
/*   Updated: 2022/08/02 13:58:57 by pducos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include "c3d_utils.h"

static bool __realloc(char **buf, size_t *cap, size_t len, size_t new_cap)
{
    char    *new_buf;

    new_buf = c3d_malloc(new_cap);
    if (!new_buf)
        return (false);
    c3d_memcpy(new_buf, *buf, len);
    free(*buf);
    *buf = new_buf;
    *cap = new_cap;
    return (true);
}

char*   c3d_read_all(int fd)
{
    char	*buf;
    size_t	cap;
    size_t	len;
    ssize_t	count;

    len = 0;
    cap = 2048;
    buf = c3d_malloc(2048 + 1);
    if (!buf)
        return (NULL);
    while (true)
    {
        if (len + 2048 + 1 >= cap 
			&& !__realloc(&buf, &cap, len, cap + 2048 + 1))
            return (free(buf), NULL);
        count = read(fd, buf + len, cap - len);
        if (count == -1)
            return (free(buf), NULL);
        if (count == 0)
            break ;
        len += count;
    }
    buf[len] = '\0';
    return (buf);
}