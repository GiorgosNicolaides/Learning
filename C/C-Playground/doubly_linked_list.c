#include <stdio.h>
#include <stdlib.h>

typedef struct list *list;
typedef struct node *node;

struct list
{
    node sentinel;
    int size;
    node first;
    node last;
};

struct node
{
    int value;
    node next;
    node prev;
};

list list_create(void)
{
    list l = malloc(sizeof(*l));
    if (l == NULL)
    {
        return NULL;
    }

    node n = malloc(sizeof(*n));
    if (n == NULL)
    {
        return NULL;
    }

    n->value = 0;
    n->next = NULL;
    n->prev = NULL;
    l->sentinel = n;

l->size=0;
l->first=l->sentinel;
l->last=l->sentinel;

    return l;
}

void list_destroy(list l)
{
    
    node current = l->sentinel->next;
    while (current->next != NULL)
    {
        node next = current->next;
        next->prev = current->prev;
        current->prev->next = next;
        free(current);
        current = next;
    }
    free(current);
    free(l->sentinel);
    free(l);
}

void list_insert_last(list l, int value)
{
    node current = l->last;
    
 
    node new = malloc(sizeof(*new));
    if (new == NULL)
    {
        printf("ERROR");
        return;
    }
    new->value = value;
    new->next = NULL;
    current->next = new;
    new->prev = current;

    l->size++;
    l->last=new;
};

int list_size(list l){
    
    return l->size;
    
}

int main(int argc, char const *argv[])
{
    list numbers = list_create();

    int n = 10;
    for (int i = 0; i < n; i++)
    {
        list_insert_last(numbers, i);
        printf("size: %d\n",list_size(numbers));
    }
    int size=0;

    for (node n = numbers->sentinel->next; n != NULL; n = n->next)
    {
        
        printf("%d\n",n->value);
        fflush(stdout);
    }
    printf("\n");


    list_destroy(numbers);
    return 0;
}
