#include<stdio.h>
#include<stdlib.h>

void swapint(int *x ,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}

void swapfloat(float *x ,float *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}





int main()
{
    int a=0;
    int b=0;
    printf("Give me 2 numbers\n");
    scanf("%d%d",&a , &b);
    printf("a:%d\nb:%d\n",a,b);

    swapint(&a,&b);
    printf("The value of a is: %d\nThe value of b is: %d\n",a,b);

    float u,z;
    printf("Give me 2 numbers\n");
    scanf("%f%f",&u, &z);
    printf("u:%f\nz:%f\n",u,z);

    swapfloat(&u,&z);
    printf("The value of u is: %f\nThe value of z is: %f\n",u,z);

    return 0;
}

