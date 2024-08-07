/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:03:43 by trimize           #+#    #+#             */
/*   Updated: 2023/11/13 18:48:00 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Iterates through the list and applies the function f

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst)
	{
		while (lst)
			(f(lst->content), (lst = lst->next));
	}
}
