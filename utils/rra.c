/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alazunin < alazunin@student.42london.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:57:41 by alazunin          #+#    #+#             */
/*   Updated: 2024/07/15 16:01:55 by alazunin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stackops.h"

void	rra(t_node **a)
{
	t_node	*last;
	t_node	*second_last;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	last = *a;
	while (last->next != NULL)
		last = last->next;
	second_last = last->prev;
	second_last->next = NULL;
	last->prev = NULL;
	last->next = *a;
	(*a)->prev = last;
	*a = last;
}
