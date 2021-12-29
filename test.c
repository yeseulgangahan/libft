#include "libft.h"

void    ft_lstprint(t_list *lst)
{
    while (lst)
    {
        write(1, lst->content, 1);
        lst = lst->next;
    }
}

void    *f(void *content)
{
    //char *p = content;
    //*p = 'v';
    return (content);
}

void    del(void *content)
{
    return ;
}

int main()
{
    t_list *node1 = ft_lstnew("a");
    t_list *node2 = ft_lstnew("b");
    t_list *node3 = ft_lstnew("c");
    node1->next = node2;
    node2->next = node3;

    ft_lstprint(ft_lstmap(node1, f, del));
}