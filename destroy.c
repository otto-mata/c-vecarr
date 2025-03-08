/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   destroy.c                                            ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/03/08 17:19:49 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/03/08 18:39:03 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#include <vecarr.h>

void	va_clear(t_vecarr **v)
{
	long	i;

	if (!v)
		return ;
	i = 0;
	while (i < (*v)->len)
		free((*v)->data[i++]);
	free((*v)->data);
	free(*v);
	v = 0;
}

void	va_destroy(t_vecarr **v)
{
	if (!v)
		return ;
	free((*v)->data);
	free(*v);
	v = 0;
}
