/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c3d_strlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducos <pducos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:25:31 by pducos            #+#    #+#             */
/*   Updated: 2022/08/02 13:57:43 by pducos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	c3d_strlen(const char *str)
{
	const char	*tmp;

	tmp = str;
	while (*str)
		str++;
	return (str - tmp);
}
