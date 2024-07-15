/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alazunin < alazunin@student.42london.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:09:04 by alazunin          #+#    #+#             */
/*   Updated: 2024/07/15 17:23:54 by alazunin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stackops.h"

void	rrb(t_node **b)
{
	t_node	*last;
	t_node	*second_last;

	if (*b == NULL || (*b)->next == NULL)
		return ;
	last = *b;
	while (last->next != NULL)
		last = last->next;
	second_last = last->prev;
	if (second_last != NULL)
		second_last->next = NULL;
	last->prev = NULL;
	last->next = *b;
	(*b)->prev = last;
	*b = last;
}
