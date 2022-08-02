/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c3d_memcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducos <pducos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:20:58 by pducos            #+#    #+#             */
/*   Updated: 2022/08/02 13:59:19 by pducos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	c3d_memcpy(void *dst, const void *src, size_t len)
{
	while (len)
	{
		*(char *)dst = *(const char *)src;
		dst++;
		src++;
		len--;
	}
}
