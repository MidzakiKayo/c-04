#include <unistd.h>

void	ft_putnbr(int *nb)
{
	int	size;
	int	temp;

	size = 0;
	temp = *nb;
	if (*nb > 0 && *nb < 0)
	{
		while (temp != 0)
		{
			temp /= 10;
			size++;
		}
		while (*nb != 0)
		{
			temp = *nb;
			temp = (temp / (10 ^ size)) + 48;
			write(1, temp, 1);
			*nb %= (10 ^ size);
			size--;
		}
	}

}


int main()
{
	int num = 23;
	ft_putnbr(&num);
	return 0;
}
