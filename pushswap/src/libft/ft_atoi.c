/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 09:56:49 by mrubio            #+#    #+#             */
/*   Updated: 2021/11/07 00:47:53 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	ft_atoi(const char *str)
{
	int				x;
	long long int	num;
	long long int	sig;

	x = 0;
	sig = 1;
	num = 0;
	while (str[x] == 32 || str[x] == 10 || str[x] == 9
		|| str[x] == 12 || str[x] == 13 || str[x] == 11)
		x++;
	if (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			sig = -1;
		x++;
	}
	while (str[x] != '\0')
	{
		if (str[x] < 48 || 57 < str[x])
			return (num * sig);
		else
			num = (num * 10) + (str[x] - '0');
		x++;
	}
	return (num * sig);
}
