#include<stdio.h>
#include<stdlib.h>
#define sh 10

typedef struct node *node ;
typedef struct list *list ;

typedef struct {
    int id;
    char name[sh];
}student;

 struct node{

    node previous;
    node current;
    node next;
    int value;
  

};

struct list{

    node first;
    node last;
    node sentinel;

};




void listCreate(void){
    list l = malloc(sizeof(*l))
    if(l == NULL)
    {
        return NULL;
    }

    node n = malloc(sizeof(*n))
    if(n == NULL)
    {
        return NULL;
    }
    
    



}



int main(int argc, char const *argv[])
{
    student s[10];
    student *s2 = &s[10];
    student *s1= (student*) malloc(sizeof(*s));

    for(int i)
    scanf("%c",s[i].name);
   


    return 0;
}

