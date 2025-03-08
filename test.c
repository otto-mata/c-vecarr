/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   test.c                                               ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/03/08 18:15:08 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/03/08 18:39:19 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <vecarr.h>

int	main(void)
{
	t_vecarr	*v;
	t_vecarr	*reversed;

	v = va_new();
	v->push(v, strdup("bonjour"));
	v->push(v, strdup("le monde"));
	v->delete (v, 0);
	printf("%s\n", (char *)v->data[0]);
	v->push(v, strdup("est beau"));
	reversed = v->reverse(v);
	v->clear(&v);
	reversed->destroy(&reversed);
}
