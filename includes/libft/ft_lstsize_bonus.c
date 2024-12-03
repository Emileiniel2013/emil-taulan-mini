/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: temil-da <temil-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 18:23:12 by temil-da          #+#    #+#             */
/*   Updated: 2024/04/14 19:35:43 by temil-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list_bonus *lst)
{
	int	a;

	a = 0;
	while (lst)
	{
		lst = lst->next;
		a++;
	}
	return (a);
}