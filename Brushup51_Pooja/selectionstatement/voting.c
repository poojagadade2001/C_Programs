/*WAP to check whether a person is eligible for voting or not.*/
#include<stdio.h>
int main()
{
int age;
printf("enter the person age");
scanf("%d",&age);
if(age!=18)
{
printf("\n person is eligible for voting=%d",age);
}
if(age==18)
{
printf("\n person is not eligible for voting=%d",age);
}
return 0;
}
