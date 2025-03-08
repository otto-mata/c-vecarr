/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   vecarr.h                                             ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/03/08 15:23:05 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/03/08 18:38:46 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECARR_H
# define VECARR_H
# define VECARR_INIT 1
# include <stdlib.h>

typedef struct s_vecarr	t_vecarr;

struct					s_vecarr
{
	long				len;
	long				allocd;
	size_t				step;
	void				**data;
	char				*(*join)(t_vecarr *, const char *);
	int					(*all)(t_vecarr *, int (*)(void *));
	int					(*delete)(t_vecarr *, long);
	int					(*pop)(t_vecarr *);
	int					(*push)(t_vecarr *, void *);
	int					(*some)(t_vecarr *, int (*)(void *));
	long				(*find_index)(t_vecarr *, int (*)(void *));
	long				(*find_last_index)(t_vecarr *, int (*)(void *));
	long				(*sum)(t_vecarr *);
	t_vecarr			*(*filter)(t_vecarr *, int (*)(void *));
	t_vecarr			*(*map)(t_vecarr *, void *(*)(void *));
	t_vecarr			*(*new)(void);
	t_vecarr			*(*reverse)(t_vecarr *);
	t_vecarr			*(*slice)(t_vecarr *, long, long);
	void				*(*find_last)(t_vecarr *, int (*)(void *));
	void				*(*find)(t_vecarr *, int (*)(void *));
	void				(*clear)(t_vecarr **);
	void				(*destroy)(t_vecarr **);
};

char					*va_join(t_vecarr *v, const char *sep);

int						va_all(t_vecarr *v, int (*test)(void *));
int						va_delete(t_vecarr *v, long index);
int						va_pop(t_vecarr *v);
int						va_push(t_vecarr *v, void *item);
int						va_some(t_vecarr *v, int (*test)(void *));

long					va_find_index(t_vecarr *v, int (*test)(void *));
long					va_find_last_index(t_vecarr *v, int (*test)(void *));
long					va_sum(t_vecarr *v);

t_vecarr				*va_filter(t_vecarr *v, int (*test)(void *));
t_vecarr				*va_map(t_vecarr *orig, void *(*map_fn)(void *));
t_vecarr				*va_new(void);
t_vecarr				*va_reverse(t_vecarr *v);
t_vecarr				*va_slice(t_vecarr *v, long begin, long end);

void					*va_find_last(t_vecarr *v, int (*test)(void *));
void					*va_find(t_vecarr *v, int (*test)(void *));
void					va_destroy(t_vecarr **v);
void					va_clear(t_vecarr **v);
#endif
