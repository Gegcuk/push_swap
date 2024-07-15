/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alazunin < alazunin@student.42london.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:16:21 by alazunin          #+#    #+#             */
/*   Updated: 2024/07/15 15:56:18 by alazunin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stackops.h"

void	pa(t_node **a, t_node **b)
{
	t_node	*firstb;

	if (*b == NULL)
		return ;
	firstb = *b;
	*b = firstb->next;
	if (*b != NULL)
		(*b)->prev = NULL;
	firstb->next = *a;
	if (*a != NULL)
		(*a)->prev = firstb;
	*a = firstb;
	firstb->prev = NULL;
}
