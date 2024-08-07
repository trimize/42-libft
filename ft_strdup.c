/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:38:04 by trimize           #+#    #+#             */
/*   Updated: 2023/11/13 19:04:11 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

//returns a char * allocated in memory which is a duplicate of s

char	*ft_strdup(const char *s)
{
	int		i;
	char	*sdup;

	i = 0;
	while (s[i])
		i++;
	sdup = (char *)malloc((i + 1) * sizeof(char));
	if (!sdup)
		return (0);
	i = 0;
	while (s[i])
	{
		sdup[i] = s[i];
		i++;
	}
	sdup[i] = 0;
	return (sdup);
}
