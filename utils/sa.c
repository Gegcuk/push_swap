/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alazunin < alazunin@student.42london.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:30:59 by alazunin          #+#    #+#             */
/*   Updated: 2024/07/15 15:47:23 by alazunin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stackops.h"

void	sa(t_node **a)
{
	t_node	*first;
	t_node	*second;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	first = *a;
	second = first->next;
	if (second->next != NULL)
	{
		second->next->prev = first;
	}
	first->next = second->next;
	second->next = first;
	second->prev = first->prev;
	first->prev = second;
	*a = second;
}
