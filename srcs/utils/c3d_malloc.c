/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c3d_malloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducos <pducos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:19:53 by pducos            #+#    #+#             */
/*   Updated: 2022/08/02 13:59:56 by pducos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "c3d_utils.h"

void	*c3d_malloc(size_t count)
{
	void	*arr;

	arr = malloc(count);
	if (!arr)
		return (c3d_error("cub3d: Out of memory\n"), NULL);
	return (arr);
}
