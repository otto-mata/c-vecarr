/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   vecarr.h                                             ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/03/08 15:23:05 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/03/08 15:52:07 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECARR_H
# define VECARR_H
# define VECARR_INIT 1
# include <stdlib.h>

typedef struct s_vecarr	t_vecarr;

struct					s_vecarr
{
	size_t				len;
	size_t				allocd;
	size_t				step;
	void				**data;
};

int						va_delete(t_vecarr *v, size_t index);
int						va_append(t_vecarr *v, void *item);

#endif
