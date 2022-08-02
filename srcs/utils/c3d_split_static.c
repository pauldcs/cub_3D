/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c3d_split_static.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducos <pducos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:21:07 by pducos            #+#    #+#             */
/*   Updated: 2022/08/01 22:22:28 by pducos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	c3d_split_static(char *str, char ch) 
{
	size_t	count;

	if (!*str)
		return (0);
	count = 1;
	while (*str)
	{
		if (*str == ch) 
		{
			*str = '\0';
			count++;
		}
	}
	return (count);
}