/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbeza <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 11:52:30 by jbarbeza          #+#    #+#             */
/*   Updated: 2021/07/09 12:11:42 by jbarbeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	zela;

	zela = 'z';
	while (zela >= 'a')
	{
		write (1, &zela, 1);
		zela--;
	}
}
}
