int	ft_isalpha(int c)
{
	if ((c >= 64 &&  c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else 
		return (0); 
}