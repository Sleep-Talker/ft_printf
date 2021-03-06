/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_preci.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarsel <almarsel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 14:42:17 by almarsel          #+#    #+#             */
/*   Updated: 2020/10/22 07:12:47 by almarsel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_printf_preci(char *str, int preci)
{
	int output;

	output = 0;
	while (str[output] && output < preci)
	{
		ft_putchar(str[output]);
		output++;
	}
	return (output);
}
