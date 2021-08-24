#include<stdio.h>
void f(int a)
{
printf("\n in f \na=%d",a);
a=200;
}
int main()
{
int a=100;
f(a);
printf("\n in main \na=%d",a);
return 0;
}
