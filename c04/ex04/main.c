

void ft_putnbr_base(int nbr, char *base);

int main()
{
	int nbr;
	char base[] = "0123456789";

	nbr = -10;

	ft_putnbr_base(nbr, base);

	return (0);
}
