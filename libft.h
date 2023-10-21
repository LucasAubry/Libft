/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 01:41:36 by Laubry            #+#    #+#             */
/*   Updated: 2023/10/21 03:26:33 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define BUFF_SIZE 8192
# define MAX_INT 2147483648

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;



int	ft_atoi(const char *str);
void ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
char *ft_itoa(int n);
void ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
char **ft_split(char const *s, char c);




char ft_strjoin (char *s1, char *s2);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char ft_strtrim(char const *s1, char const *set);
char *ft_substr(char const *s, unsigned int start, size_t len);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_digit(int c);
int	ft_isprint(int c);
int ft_memcmp(const void *ptr1, const void *ptr2, size_t s);
void	*ft_memcpy(void *dst, const void *source, size_t size);
void *ft_memmove(void *dest, const void *src, size_t len);
void *ft_memset(void *ptr, int val, size_t cout);
char *ft_strchr(const char *str, int c);
char *ft_stardup(const char *src);
char ft_strcat(char *dest, const char *src);
size_t ft_strlcpy(char *dest, const char *src, size_t size);
size_t ft_strlen(const char *str);
int	ft_strcmp(const char *str1, const char *str2);
char	*ft_strnstr(const char *str, const char *needle, size_t len);
char * ft_strrchr(const char *str, int c);
int	ft_tolower(int chr);
int	ft_toupper(int chr);



#endif