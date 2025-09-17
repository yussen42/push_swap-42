#include "push_swap.h"

static int	get_us(int a)
{
	int	val;

	val = 1;
	while (a > 0)
	{
		val *= 2;
		a--;
	}
	return (val);
}

int logaritma(int nbr)
{
	int kuvvet;

	kuvvet = 1;
	while (kuvvet)
	{
		if (nbr < get_us(kuvvet + 1) && nbr >= get_us(kuvvet))
			return (kuvvet);
		kuvvet++;
	}
	return (0);
}
