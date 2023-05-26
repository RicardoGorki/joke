#include "mylib.h"

t_node  *new_node(int id)
{
        t_node  *new;

        new = malloc(sizeof(t_node));
        if (!new)
                return (NULL);
        new->id = id;
		new->product = NULL;
		new->product_cod = 0;
		new->price = 0;
		new->discount = 0;
		new->quantity = 0;
        new->next = NULL;
        return (new);
}

void    push_node(t_node **node, int id)
{
        t_node  *temp;

        temp = new_node(id);
        temp->next = *node;
        *node = temp;
}

void    pop(t_node **node)
{
        t_node  *temp;

        temp = NULL;
        if (!*node)
                return ;
        temp = *node;
        *node = (*node)->next;
        free(temp);
}

int main (int argc, char **argv)
{

	t_node **new_node;
	if (argv == 1)
	{
		new_node = malloc(sizeof(t_node));
		if (!new_node)
			exit(1);


		while(*new_node)
			pop(new_node);
		free(new_node);
	}
	else
		printf("Do not need args\n");

	return (0);
}
