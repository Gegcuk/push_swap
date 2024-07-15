/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alekseylazunin <alekseylazunin@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:52:54 by alazunin          #+#    #+#             */
/*   Updated: 2024/07/12 12:03:37 by alekseylazu      ###   ########.fr       */
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

	printf("Stack a before ra: ");
	printstack(a);

	printf("Stack b before rb: ");
	printstack(b);

	ra(&a);
	rb(&b);

	printf("Stack a after ra: ");
	printstack(a);

	printf("Stack b after rb: ");
	printstack(b);

	rr(&a, &b);

	printf("Stack a after rr: ");
	printstack(a);

	printf("Stack b after rr: ");
	printstack(b);

	return (0);
}
