/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 23:46:15 by mrubio            #+#    #+#             */
/*   Updated: 2022/05/25 10:53:08 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "src/libft/libft.h"

# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct	s_stack {
	int	*array;
	int	size;
}				t_stack;

void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);

void	pushswap(t_stack *a, t_stack *b);
void	print_stacks(t_stack *a, t_stack *b);

