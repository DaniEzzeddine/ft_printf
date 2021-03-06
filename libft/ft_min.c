/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dezzeddi <dezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 00:05:37 by dezzeddi          #+#    #+#             */
/*   Updated: 2017/06/14 00:13:17 by dezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_min(int *arr, int n)
{
	int i;
	int max;

	max = arr[0];
	i = 1;
	while (i < n)
	{
		if (arr[i] < max)
			max = arr[i];
		i++;
	}
	return (max);
}
