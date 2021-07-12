/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbeza <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:08:14 by jbarbeza          #+#    #+#             */
/*   Updated: 2021/07/09 12:28:38 by jbarbeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{	
	char	nombre;

	nombre = '0';
	while (nombre <= '9')
	{
		write (1, &nombre, 1);
		nombre++;
	}
}
