/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alekseylazunin <alekseylazunin@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:33:23 by alekseylazu       #+#    #+#             */
/*   Updated: 2024/07/12 12:00:18 by alekseylazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stackops.h"

void    ra(t_node **a)
{
    t_node *first;
    t_node *last;

    if (*a == NULL || (*a)->next == NULL)
    {
        return;
    }
    first = *a;
    last = *a;
    while (last->next != NULL)
    {
        last = last->next;
    }
    *a = first->next;
    (*a)->prev = NULL;
    first->next = NULL;
    first->prev = last;
    last->next = first;
}
