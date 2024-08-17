int ft_sqrt(int nb)
{
	int	s;
	int	t;

	if (nb <= 0)
		return 0;
	t = 0;
	s = nb / 2;

	while (s != t)
	{
		t = s;
		s = (t + nb / t) / 2;
	}
	if (s * s != nb)
		return 0;
	return s;
}
