/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbeza <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 10:42:07 by jbarbeza          #+#    #+#             */
/*   Updated: 2021/07/12 14:35:47 by jbarbeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	test(char a)
{
	write(1, &a, 1);
}

void	virgule(char a, char b, char c)

{
	if (a != '7' || b != '8' || c != '9')
	{
		test(',');
		test(' ');
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				test(a);
				test(b);
				test(c);
				virgule(a,b,c);
				c+;
			}
			b++;
		}
		a++;
	}	
}

int main (void)
{ 
	ft_print_comb();
	return (0);
}
