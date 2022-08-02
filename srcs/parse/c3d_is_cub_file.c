/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c3d_is_cub_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducos <pducos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:07:48 by pducos            #+#    #+#             */
/*   Updated: 2022/08/02 14:38:39 by pducos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stddef.h>
#include "c3d_utils.h"

bool	c3d_is_cub_file(const char *filename)
{
	size_t	len;

	len = c3d_strlen(filename);
	if (len < 5 
		|| c3d_strcmp(".cub", &filename[len - 4]))
		return (false);
	return (true);
}