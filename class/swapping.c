#include<stdio.h>
void swap(intx,inty)
{
int t;
t=a;
a=b;
b=t;
}
int main()
{
int a=100,b=200;
printf("\n before swapping a = %d b = %d",a,b);
swap(a,b)
printf("\n after swapping a = %d b = %d",a,b);
return 0;
}
