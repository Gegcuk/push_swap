/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alazunin < alazunin@student.42london.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:52:54 by alazunin          #+#    #+#             */
/*   Updated: 2024/07/11 19:30:09 by alazunin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "stackops.h"

int	main(int argc, char *argv[])
{
	t_node	*a;
	t_node	*b;
	int		index;
	int		num;

	if (argc < 2)
	{
		printf("Usage: %s <list of numbers>\n", argv[0]);
		return (1);
	}

	a = NULL;
	b = NULL;
	index = 1;
	while (index < argc)
	{
		num = atoi(argv[index++]);
		push(&a, num);
	}

	push(&b, 6);
	push(&b, 5);
	push(&b, 4);

	printf("Stack a before sa: ");
	printstack(a);

	printf("Stack b before sb: ");
	printstack(b);

	sa(&a);
	sb(&b);

	printf("Stack a after sa: ");
	printstack(a);

	printf("Stack b after sb: ");
	printstack(b);

	return (0);
}
