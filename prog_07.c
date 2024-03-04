#include<stdio.h>

int main()
{

int a=10, b=20, c;

printf("Values before swapping a=%d and b=%d \n" ,a,b);
c=a;
a=b;
b=c;

printf("Values after swapping a=%d and b=%d",a,b);

    return 0;
}