#include<stdio.h>
#include<stdlib.h>
#define MAXSTRING 100

typedef struct
{
    int height;
    float varos;
    char name;
    int id;

}people;


int main()
{

people p0(175 , 65 , "Maria" ,2176198);
people *ptr;
ptr=&p0;

printf("Ipsos:%d Varos:%f  Onoma:%s Id:%d",*ptr->height, *ptr->varos , *ptr->name , *ptr->id);
    
    return 0;
}
