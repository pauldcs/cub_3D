/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_mem_set.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducos <pducos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:21:12 by pducos            #+#    #+#             */
/*   Updated: 2022/08/01 22:21:55 by pducos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	c3d_memset(void *p, char byte, size_t n)
{
	while (n)
	{
		*(char *)p = byte;
		n--;
		p++;
	}
}
