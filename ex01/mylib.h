#ifndef MYLIB_H
# define MYLIB_H

#include <stdio.h>
#include <stdlib.h>

typedef struct	s_node
{
	int		id;
	char	*product;
	int		product_cod;
	double	price;
	double	discount;
	int		quantity;
	struct s_node *next;
}				t_node;

#endif
