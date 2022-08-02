/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c3d_parser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducos <pducos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:39:32 by pducos            #+#    #+#             */
/*   Updated: 2022/08/02 22:58:50 by pducos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "c3d_utils.h"
#include "c3d_parse.h"

bool	c3d_parser(char *file)
{
	int		fd;
	char	*content;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (c3d_error("Error\n%s: %s\n", file, strerror(errno)), 
				false);
	content = c3d_read_all(fd);
	close(fd);
	if (content == NULL)
		return (c3d_error("Error\n%s: Failed to read file\n", file),
				false);
	return (free(content), true);
}