#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXSTRING  14

void convertToUpper(char *ptr);

int main(void)
{
    char string[MAXSTRING];
    printf("Add a sentence :\n");
    for(int i=0; i<MAXSTRING;i++){
    scanf("%c",&string[i]);
    }

    convertToUpper(string);
    printf("The sentence after the convention is :%s\n",string);
    return 0;
}
void convertToUpper(char *ptr)
{
    while(*ptr != '\0'){
        *ptr = toupper(*ptr);
        ptr++;
    }


}