/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alazunin < alazunin@student.42london.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:41:08 by alazunin          #+#    #+#             */
/*   Updated: 2024/07/11 19:22:49 by alazunin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stackops.h"

void	sb(t_node **b)
{
	t_node	*first;
	t_node	*second;

	if (*b == NULL || (*b)->next == NULL)
	{
		return ;
	}
	first = *b;
	second = first->next;
	if (second->next != NULL)
	{
		second->next->prev = first;
	}
	first->next = second->next;
	second->next = first;
	second->prev = first->prev;
	first->prev = second;
	*b = second;
}
