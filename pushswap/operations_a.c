/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:35:06 by mrubio            #+#    #+#             */
/*   Updated: 2022/05/23 10:21:20 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"


//move first number of b stack to a
void	pa(t_stack *a, t_stack *b)
{
	int i;

	i = 0;
	if (b->size == 0)
		return ;
	a->array = ft_realloc(a->array, (a->size + 1) * sizeof(int));
	while (i < a->size)
	{
		a->array[i + 1] = a->array[i];
		i++;
	}
	a->array[0] = b->array[0];
	i = 0;
	b->array = ft_realloc(b->array, (b->size - 1) * sizeof(int));
	while (i < b->size - 1)
	{
		b->array[i] = b->array[i + 1];
		i++;
	}
	write(1, "pa\n", 3);
}

void	pb(t_stack *a, t_stack *b)
{
	int i;

	i = 0;
	if (a->size == 0)
		return ;
	printf("A\n");
	b->array = ft_realloc(b->array, (b->size + 1) * sizeof(int));
	printf("B\n");
	while (i < b->size)
	{
		printf("B%i\n", i);
		b->array[i + 1] = b->array[i];
		i++;
	}
	printf("C\n");
	b->array[0] = a->array[0];
	i = 0;
	a->array = ft_realloc(a->array, (a->size - 1) * sizeof(int));
	printf("D\n");
	while (i < a->size - 1)
	{
		printf("D%i\n", i);
		a->array[i] = a->array[i + 1];
		i++;
	}
	write(1, "pb\n", 3);
}
