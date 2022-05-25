/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 09:37:27 by mrubio            #+#    #+#             */
/*   Updated: 2022/05/25 11:07:31 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	pushswap(t_stack *a, t_stack *b)
{
	pa(a, b);
	pb(a, b);
	pb(a, b);
	pb(a, b);
	pb(a, b);
	pa(a, b);
	pa(a, b);
	pb(a, b);
	pa(a, b);
	pa(a, b);
	print_stacks(a, b);
}