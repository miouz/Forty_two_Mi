#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	//char a = 'l';
	//char b = 'o';

	//ft_putchar('l');
	//ft_putchar('o');
	write(1, "lol", 3);
	write(1, "\n", 1);
	return(0);
}
