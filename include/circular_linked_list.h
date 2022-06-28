#ifndef CIRCULAR_LINKED_LIST_H
# define CIRCULAR_LINKED_LIST_H

# include <stdbool.h>

typedef int	t_data;

typedef struct	s_node
{
	t_data			data;
	struct s_node	*next;
}	t_node;

typedef struct s_clist
{
	t_node	*tail;
	t_node	*before;
	t_node	*cur;
	int		num_of_data;
}	t_clist;


void	clist_init(t_clist *plist);
void	clist_insert_back(t_clist *plist, t_data data);
void	clist_insert_front(t_clist *plist, t_data data);
bool	clist_first(t_clist *plist, t_data *pdata);
bool	clist_next(t_clist *plist, t_data *pdata);
t_data	clist_remove(t_clist *plist);
int		clist_count(t_clist *plist);

#endif