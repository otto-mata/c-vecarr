/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   vecarr.c                                             ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/03/08 15:25:09 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/03/08 15:54:05 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#include "va_internals.h"
#include <vecarr.h>

void	init_vector(t_vecarr *v)
{
	v->len = 0;
	v->allocd = 0;
	v->step = 2;
	v->data = NULL;
}

int	va_append(t_vecarr *v, void *item)
{
	void	*tmp;

	if (!v->data)
	{
		v->data = malloc(VECARR_INIT * sizeof(void **));
		if (!v->data)
			return (-1);
		v->allocd = VECARR_INIT;
	}
	else if (v->len >= v->allocd)
	{
		tmp = om_realloc(v->data, v->allocd * sizeof(void **), v->allocd
				* v->step * sizeof(void **));
		if (!tmp)
			return (-1);
		v->data = tmp;
		v->allocd *= v->step;
	}
	v->data[v->len] = item;
	v->len++;
	return (0);
}

int va_delete (t_vecarr *v, size_t index)
{
	if (index < 0 || index >= v->len)
		return (-1);
	om_memmove(v->data + index, v->data + index + 1, (v->len - index - 1)
		* sizeof(void **));
	v->len--;
	return (0);
}
