/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alazunin < alazunin@student.42london.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:43:51 by alekseylazu       #+#    #+#             */
/*   Updated: 2024/07/15 17:03:54 by alazunin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stackops.h"

void	rb(t_node **b)
{
	t_node	*first;
	t_node	*last;

	if (*b == NULL || (*b)->next == NULL)
		return ;
	first = *b;
	last = *b;
	while (last->next != NULL)
		last = last->next;
	*b = first->next;
	(*b)->prev = NULL;
	first->next = NULL;
	first->prev = last;
	last->next = first;
}
