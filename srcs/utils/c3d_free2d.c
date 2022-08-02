/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c3d_free2d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducos <pducos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 22:47:32 by pducos            #+#    #+#             */
/*   Updated: 2022/08/01 23:05:22 by pducos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	c3d_free2d(char **arr)
{
	register int	idx;

	if (!arr)
		return ;
	idx = 0;
	while (arr[idx])
		free(arr[idx++]);
	free(arr);
}
