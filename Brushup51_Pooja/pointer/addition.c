/*Demonstrate addition of two floating type numbers by using call by address.*/

#include<stdio.h>
int main()
{
int first,second,*p,*q,sum;
printf("\n enter the value first,second");
scanf("%d%d",&first,&second);
p=&first;
q=&second;
sum=*p+*q;
printf("\n sum=%d",sum);
return 0;
}
