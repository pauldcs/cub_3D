/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c3d_utils.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducos <pducos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 13:54:20 by pducos            #+#    #+#             */
/*   Updated: 2022/08/02 13:59:14 by pducos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C3D_UTILS_H
# define C3D_UTILS_H

#include <stddef.h>

void		c3d_error(const char *fmt, ...);
void		c3d_free2d(char **arr);
void		*c3d_malloc(size_t count);
void		c3d_memcpy(void *dst, const void *src, size_t len);
void		c3d_memset(void *p, char byte, size_t n);
void		c3d_putstr(int fd, const char *fmt, ...);
char		**c3d_split_dynamic(char const *s, char c);
size_t		c3d_split_static(char *str, char ch);
char const	*c3d_str_to_uint(const char *str, int *result);
char		*c3d_strchr(const char *s, int c);
int			c3d_strcmp(const char *a, const char *b);
char		*c3d_strcreate(const char *s, size_t len);
size_t		c3d_strlen(const char *str);
size_t		c3d_strslen(size_t n, ...);

#endif /* c3d_parse.h */