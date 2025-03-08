/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   va_internals.h                                       ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/03/08 15:31:07 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/03/08 15:32:43 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#ifndef VA_INTERNALS_H
# define VA_INTERNALS_H
# include <stdlib.h>

void	*om_memmove(void *d, void const *s, size_t sz);
void	*om_realloc(void *mem, size_t old_sz, size_t new_sz);

#endif
