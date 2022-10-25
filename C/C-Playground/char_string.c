#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>


int main(int argc, char const *argv[])
{

const char *string="481fsdbvls hb823";
char *ptr;
long x;
x=strtoul(string , &ptr ,9);
printf("%s\n%ld\n%s",string , x ,ptr);
sscanf(ptr ,string);



}
