/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   utils.c                                              ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/03/08 15:30:26 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/03/08 15:32:32 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#include "va_internals.h"

void	*om_realloc(void *mem, size_t old_sz, size_t new_sz)
{
	void	*nmem;
	size_t	sz;

	nmem = malloc(new_sz);
	if (!nmem)
		return (0);
	if (!mem)
		return (nmem);
	if (new_sz < old_sz)
		sz = new_sz;
	else
		sz = old_sz;
	while (sz--)
		((unsigned char *)nmem)[sz] = ((unsigned char *)mem)[sz];
	free(mem);
	return (nmem);
}

void	*om_memmove(void *d, void const *s, size_t sz)
{
	char const	*src = s;
	char		*dest;
	char		*lasts;
	char		*lastd;

	if (!d && !s)
		return (d);
	dest = d;
	if (dest < src)
		while (sz--)
			*dest++ = *src++;
	else
	{
		lasts = (char *)(src + (sz - 1));
		lastd = dest + (sz - 1);
		while (sz--)
			*lastd-- = *lasts--;
	}
	return (d);
}
