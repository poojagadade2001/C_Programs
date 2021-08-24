/*a location can be pointed by any number of pointers*/

#include<stdio.h>
int main()
{
int a=10,b=20,c=30;
int *p=&a;
int *q=&b;
q=&b;
int *r=&c;
r=&c;
printf("\n *p=%d",*p);
printf("\n *p=%d",*q);
printf("\n *p=%d",*r);
return 0;
}
