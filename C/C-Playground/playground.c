#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAXSTRING 100



int main(int argc, char const *argv[])
{

    char str[]="hello";
    char str1[] = "World";
    char str2[] = " ";
   
    if(strcmp(str ,str2 )==0)printf("Equal");
    else printf("Not equal");

}
