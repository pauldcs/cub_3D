/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducos <pducos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 21:53:22 by pducos            #+#    #+#             */
/*   Updated: 2022/08/02 14:44:46 by pducos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "c3d_utils.h"
#include "c3d_parse.h"

static void	usage_error(char *exec_name)
{
	c3d_error("%s: Usage error\n", exec_name);
	c3d_error("Usage: %s <cub_file>\n", exec_name);
}

int	main(int ac, char **av)
{
	if (ac != 2 
		|| !c3d_is_cub_file(av[1]))
		return (usage_error(av[0]), EXIT_FAILURE);
	if (!c3d_parser(av[1]))
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}