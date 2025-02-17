
#ifndef MY_STANDARD_LIB_H
# define MY_STANDARD_LIB_H

# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

# define TRUE 1
# define FALSE 0
# define SUCCESS 1

# define LONG_MAX (long)9223372036854775807
# define LONG_MIN (long)-9223372036854775807

int					ft_isalpha(int c);
int					ft_isdigit(char *s);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
int					ft_strncmp(const char *s1, const char *s2, size_t n);

void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);

char				*ft_strnstr(const char *big, const char *little,
						size_t len);
int					ft_atoi(const char *nptr);
long				ft_atol(const char *nptr);
int					ft_atoi_hexa(const char *str);

size_t				ft_strlen(const char *str);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
void				ft_search_and_replace(char *str, const char search,
						const char replace);

void				*ft_calloc(size_t nmemb, size_t size);
char				*ft_strdup(const char *s);

void				*ft_memset(void *s, int c, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);

char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);

char				**ft_split(char const *s1, char set);
int					ft_get_split_size(char **buffer);
int					ft_get_nsplit_size(char **buffer, char exclude_c);
void				ft_free_split(char **buffer);

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_itoa(int n);

int					ft_putchar_fd(char c, int fd);
int					ft_putchar(char c);
void				ft_putstr_fd(char *s, int fd);
int					ft_putstr(char *s);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
int					ft_putnbr(int n);
int					ft_putnbr_base(unsigned long int n, char *base);
int					ft_putnbr_unsigned(unsigned int n);
int					ft_putnbr_unsigned_base(unsigned int n, char *base);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
t_list				*ft_lst_by_index(t_list *lst, int index);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 500
# endif

char				*get_next_line(int fd);

typedef int			(*t_func_ptr)(void *);
int					ft_printf(const char *format, ...);

#endif
