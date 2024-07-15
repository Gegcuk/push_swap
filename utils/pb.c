/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alazunin < alazunin@student.42london.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:32:15 by alazunin          #+#    #+#             */
/*   Updated: 2024/07/15 15:55:08 by alazunin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stackops.h"

void	pb(t_node **a, t_node **b)
{
	t_node	*firsta;

	if (*a == NULL)
		return ;
	firsta = *a;
	*a = firsta->next;
	if (*a != NULL)
		(*a)->prev = NULL;
	firsta->next = *b;
	if (*b != NULL)
		(*b)->prev = firsta;
	*b = firsta;
	firsta->prev = NULL;
}
