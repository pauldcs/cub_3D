/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c3d_strslen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducos <pducos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:21:11 by pducos            #+#    #+#             */
/*   Updated: 2022/08/01 22:21:11 by pducos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stddef.h>

size_t	c3d_strslen(size_t n, ...)
{
	va_list	ap;
	char	*p1;
	char	*p2;
	size_t	len;

	len = 0;
	va_start(ap, n);
	while (n--)
	{
		p2 = va_arg(ap, char *);
		p1 = p2;
		while (*p1)
			p1++;
		len += p1 - p2;
	}
	va_end(ap);
	return (len);
}
