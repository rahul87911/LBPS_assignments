#include<stdio.h>

int main()
{

int a=10, b=20;

printf("Values before swapping a=%d and b=%d \n" ,a,b);

a=a+b;
b=a-b;
a=a-b;

printf("Values after swapping a=%d and b=%d",a,b);

    return 0;
}