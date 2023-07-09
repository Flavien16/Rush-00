/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcamoin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:54:46 by fcamoin           #+#    #+#             */
/*   Updated: 2023/07/08 19:39:56 by fcamoin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	premline(int a)
{
	int	coll;

	coll = 0;
	while (coll < a)
	{
		if (coll == 0)
		{
			ft_putchar('A');
		}
		else if (coll == (a - 1))
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		coll++;
	}
}

void	moyline(int b)
{
	int	collo;

	collo = 0;
	while (collo < b)
	{
		if (collo == 0)
		{
			ft_putchar('B');
		}
		else if (collo == (b - 1))
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		collo++;
	}
}

void	dernline(int c)
{
	int	col;

	col = 0;
	while (col < c)
	{
		if (col == 0)
		{
			ft_putchar('C');
		}
		else if (col == (c - 1))
		{
			ft_putchar('A');
		}
		else
		{
			ft_putchar('B');
		}
		col++;
	}
}

int	rush(int x, int y)
{
	int	line;

	line = 0;
	if (x <= 0 || y <= 0)
		return (0);
	while (line < y)
	{
		if (line == 0)
		{
			premline(x);
		}
		else if (line == (y - 1))
		{
			dernline(x);
		}
		else
		{
			moyline(x);
		}
		ft_putchar('\n');
		line++;
	}
	return (0);
}
