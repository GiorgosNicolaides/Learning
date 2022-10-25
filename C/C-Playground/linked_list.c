#include <stdio.h>
#include <stdlib.h>

typedef struct list *list;
typedef struct node *node;

struct node
{
    int value;
    node next;
    char name[100];
};

node head;

void add(const node p)
{
    node n = malloc(sizeof(*n));
    if (n == NULL)
    {
        printf("ERROR");
    }
    n = p;
    n->next = head;
    head = n;
}

void destroy( const node p){

    while(head != NULL)
    {
        head = NULL;
        free(head);
        head=p->next;
        
    }
}


int main(int argc, char const *argv[])
{
    node p;

    printf("Give me your name:");
    // scanf("%s", p->name);

    printf("Give me your id:");
    scanf("%d", &p->value);

    


return 0;
}
