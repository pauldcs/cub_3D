/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c3d_strcreate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducos <pducos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:20:44 by pducos            #+#    #+#             */
/*   Updated: 2022/08/02 14:01:13 by pducos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "c3d_utils.h"

char	*c3d_strcreate(const char *s, size_t len)
{
	char	*ret;

	ret = c3d_malloc(len + 1);
	if (!ret)
		return (NULL);
	c3d_memcpy(ret, s, len);
	ret[len] = '\0';
	return (ret);
}
