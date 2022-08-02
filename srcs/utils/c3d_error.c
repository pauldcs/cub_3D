/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c3d_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducos <pducos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 23:01:01 by pducos            #+#    #+#             */
/*   Updated: 2022/08/01 23:01:54 by pducos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdint.h>

static uint64_t	__int(int32_t c)
{
	int8_t	nbr[11];
	int64_t	n;
	int32_t	i;

	n = (int64_t)c;
	if (n)
	{
		if (n < 0)
			n *= -1;
		i = 11;
		while (n)
		{
			nbr[--i] = (n % 10) | 0x30;
			n /= 10;
		}
		if (c < 0)
			nbr[--i] = '-';
		return (write(STDOUT_FILENO, &nbr[i], 11 - i));
	}
	return (write(STDOUT_FILENO, "0", 1));
}

static uint64_t	__str(const uint8_t *s)
{
	uint8_t	*tmp;

	if (s)
	{
		tmp = (uint8_t *)s;
		while (*s)
			s++;
		return (write(STDOUT_FILENO, tmp, s - tmp));
	}
	return (write(STDOUT_FILENO, "(null)", 6));
}

static int32_t	isfmt(int8_t c)
{
	char	*fmt;

	fmt = "sd";
	while (*fmt)
	{
		if (c == *fmt)
			return (1);
		fmt++;
	}
	return (0);
}

void	c3d_error(const char *fmt, ...)
{
	va_list		ap;
	int			i;

	va_start(ap, fmt);
	while (*fmt)
	{
		i = 0;
		while (fmt[i] && fmt[i] != '%')
			i++;
		if (i)
		{
			write(STDOUT_FILENO, fmt, i);
			fmt += i;
		}
		if (*fmt && isfmt(*++fmt))
		{
			
			if (*fmt == 's')
				__str(va_arg(ap, uint8_t *));
			else if (*fmt == 'd')
				__int(va_arg(ap, int32_t));
			fmt++;
		}
	}
	va_end(ap);
}