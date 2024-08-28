#include <unistd.h>
#include <stdlib.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_printtab(int *tab, int n)
{
	int	i;
	i = 0;

	while (i < n)
	{
		ft_putchar(tab[i] + 48);
		i++;
	}
	if(tab[0]!= 10 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}
void	ft_creattab(int *tab,int n)
{
	//indice de tab i;
	int	i;

	while(1)
	{
		i = n - 1;

		ft_printtab(tab, n);
		while( i >= 0 && tab[i] == 10 - n + i)
			i--;
		if ( i < 0)
			break;
		tab[i]++;
		while(i + 1 < n )
		{
			i++;
			tab[i] = tab[i - 1] + 1;
		}
	}
}
/*	while (i >= 0)
	{
		while (tab[i] < 10 - n + i)
		{
			tab[i]++;
			ft_printtab(tab, n);
			while (tab[i] == 10 - n + i)
			{
				i--;
				tab[i]++;
				tab[ i + 1] = tab[i] + 1;
			}
			tab[i]++;
		}
		i--;
	}
}*/
void	ft_printcombn(int n)
{
	int	i;
	int	*tab;

	tab = NULL;
	tab = malloc(n * sizeof(int));
	i = 0;

	while ( i < n )
	{
		tab[i] = i;
		i++;
	}
	ft_printtab(tab, n);
	ft_creattab(tab, n);
}

int	main(void)
{
	ft_printcombn(5);
	ft_putchar('\n');
	return(0);
}
	






/*n = 4,
  0123,0124,0125,0126,0127,0128,0129,0134,0135,0136,0137,0138,0139,0145,0146,0147,0148,0149,0156
*/	  
