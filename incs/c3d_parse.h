/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c3d_parse.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducos <pducos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 21:53:52 by pducos            #+#    #+#             */
/*   Updated: 2022/08/02 14:41:25 by pducos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C3D_PARSE_H
# define C3D_PARSE_H

#include <stdbool.h>

bool	c3d_is_cub_file(const char *filename);
bool	c3d_parser(char *filename);
char*   c3d_read_all(int fd);

#endif /* c3d_parse.h */