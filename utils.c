#include "push_swap.h"

int is_number(char *str)
{
    int i;

    i = 0;
    if(!str || !str[0])
        return(0);
    if(str[i] == '-' || str[i] == '+')
        i++;
    if(!str[i])
        return(0);
    
    while(str[i])
    {
        if(str[i] < '0' || str[i] > '9')
            return(0);
        i++;
    }
    return(1);
}

long atol(const char *str)
{
    long    result;
    int         i;
    int     sinal;

    result = 0;
    sinal = 1;
    i = 0;

    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i + 1] == '+' || str[i + 1] == '-')
            return(0);
        if(str[i] == '-')
            sinal = -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return(result * sinal);
}

int     has_duplicates(t_node *a)
{
    t_node  *cur;
    t_node  *cmp;

    cur = a;
    while(cur)
    {
        cmp = cur -> next;
        while(cmp)
        {
            if(cmp -> value == cur -> value)
                return(1);
            cmp = cmp -> next;
        }
        cur = cur -> next;
    }
    return(0);
}
int is_sorted(t_node *a)
{
    if(!a)
        return(1);
    while(a -> next)
    {
        if(a -> value > a -> next -> value)
            return(0);
        a = a -> next;
    }
    return(1);
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