/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:48:00 by trimize           #+#    #+#             */
/*   Updated: 2023/11/13 19:21:19 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
#include <string.h>
#include "libft.h"

//allocates and returns a sunstring from s, starts at start, ends et end
//and it's maximum size is len

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	if (start > i)
		return (ft_strdup(""));
	if (len > i - start)
		len = i - start;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (0);
	i = 0;
	while (s[start] && i < len)
		substr[i++] = s[start++];
	return (substr[i] = 0, substr);
}

/*int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s", ft_substr(argv[1], atoi(argv[2]), atoi(argv[3])));
	return (0);
}*/