#include "push_swap.h"

void    move_min_to_top(t_node **a)
{
    int     pos;
    int     size;
    
    pos = find_min_position(a);
    size = stack_size(a);

    if(pos == 0)
        return ;
    if(pos <= size/2)
    {
        while(pos--)
            ra(a);
    }
    else
    {
        pos = size - pos;
        while(pos--)
            rra(a);
    }
}

int find_min_position(t_node *a)
{
    int     min;
    int     pos;
    int     i;

    min = a -> value;
    pos = 0;
    i = 0;

    while(a)
    {
        if(a -> value < min)
        {
            min = a -> value;
            pos = i;
        }
        i++;
        a = a -> next;
    }
    return(pos);
}

int stack_size(t_node *begin_list)
{
    int     count;

    count = 0;
    while(begin_list != NULL)
    {
        count++;
        begin_list = begin_list -> next; 
    }
    return(count);
}