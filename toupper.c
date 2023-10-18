int	ft_tolower(int chr);
{
	if (chr >= 97 && chr <= 122)
		chr -= 32;
	return (chr);
}