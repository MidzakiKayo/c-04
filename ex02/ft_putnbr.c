#include <unistd.h>

void	ft_putnbr(int *nb)
{
	int	size;
	int	temp;
	char	minus;

	minus = '-';
	size = 1;
	temp = *nb;
	if (*nb < 0)
	{
		write(1, &minus, 1);
	}
	*nb *= (-1);
	if (*nb != 0)
	{
		while (temp)
		{
			temp /= 10;
			size *= 10;
		}
		while (*nb != 0)
		{
			size /= 10;
			temp = *nb;
			temp = (temp / size) + 48;
			write(1, &temp, 1);
			*nb %= size;
		}
	}

}


int main()
{
	int num = 23;
	ft_putnbr(&num);
	return 0;
}
