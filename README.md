# ft-printf-42

##Table of content :
* [What is printf ?](#what-is-printf-)
* [What is in it ?](#what-is-in-it-)
* [How does is work ?](#how-does-is-work-)

### What is printf ?
 Printf is a individual project at 42 re-create printf that can be used for later.
 be used for later. The purpose is to understand Variadic functions and Function pointer.
 
### What is in it ?
```
int				 ft_printf(const char *format, ...);
typedef void	(*t_cho)(va_list, int *);
void			 ft_putchar(char c);
void			 ft_read(const char *format, int *i, int *j);
void			 ft_readnbr(int nb, int *j);
void			 ft_readabsnbr(unsigned int nb, int *j);
void			 ft_string(va_list ap, int *i);
void			 ft_char(va_list ap, int *i);
void			 ft_putnbr(va_list ap, int *i);
void			 ft_absputnbr(va_list ap, int *i);
void			 ft_putadr(va_list ap, int *i);
void			 ft_puthexa(unsigned long long b, int *i);
void			 ft_puthexax(va_list ap, int *i);
void			 ft_puthexaxmaj(va_list ap, int *i);
```

### How does is work ?
The Makefile contain 4 rules : all clean fclean and re.
Create a library called libftprintf.a. Later link this library with -L printf -lftprintf
