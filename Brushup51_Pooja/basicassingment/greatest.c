/*Write a program which will accept three integer numbers from user and find out greatest
among them using conditional operator.*/
#include<stdio.h>
int main()
{
int a,b,c,d;
printf("\n enter the three numbers");
scanf("%d%d%d",&a,&b,&c);
d=(a>b&&a>c?a:b>c?b:c);
printf("\n greatest number=%d",d);
return 0;
}
