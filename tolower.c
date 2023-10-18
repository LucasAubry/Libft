int	ft_tolower(int chr);
{
	if (chr >= 65 && chr <= 90)
		chr += 32;
	return (chr);
}