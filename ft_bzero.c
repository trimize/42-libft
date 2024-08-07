/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:08:28 by trimize           #+#    #+#             */
/*   Updated: 2023/11/13 19:17:32 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
/*#include <stdlib.h>
#include <stdio.h>*/

//Replace n bytes in s by 0

void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = 0;
	while (i < (int)n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}

/*int	main(int argc, char **argv)
{
	int		i;
	int		a;
	void	*s;

	a = atoi(argv[2]);
	s = argv[1];
	(void)argc;
	i = 0;
	ft_bzero(s, (size_t)atoi(argv[2]));
	while (i < a)
	{
		printf("%d\n", ((int *)s)[i]);
		i++;
	}
	return (0);
}*/