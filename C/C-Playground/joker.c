#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main()
{
    srand(time(NULL));
    for(int i=0;i<5;i++){
        for (int  j = 0; j < 6; j++){
            if(j<5){
                printf("%d ", (rand()%45)+1);
            }
            else 
            printf("%d " , (rand()%20)+1);
        }
        printf("\n");
    }
}



