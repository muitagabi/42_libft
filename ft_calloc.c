#include "libft.h"

void *ft_calloc(size_t number, size_t size)
{
	void *ptr;

	if (number == 0 || size == 0)
		return (malloc(0));
	ptr = malloc(number * size);
	if (!ptr)
		return (malloc(0);
	ft_bzero(ptr, number * size);
	return (ptr);
}