/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c3d_split_dynamic.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducos <pducos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 01:50:07 by pducos            #+#    #+#             */
/*   Updated: 2022/08/02 14:00:31 by pducos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdlib.h>
#include "c3d_utils.h"

static size_t	__count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

char	**c3d_split_dynamic(char const *s, char c)
{
	char	**arr;
	size_t	word;
	size_t	size;

	size = __count_words(s, c);
	arr = malloc (sizeof(char *) * (size + 1));
	if (!arr)
		return (NULL);
	while (*s && (*s == c))
		s++;
	while (*s)
	{
		word = 0;
		while (s[word] && (s[word] != c))
			word++;
		if (word)
		{
			*(arr++) = c3d_strcreate(s, word);
			s += word;
		}
		else
			s++;
	}
	*arr = NULL;
	return (arr - size);
}
