/*WAP to check whether a number is even or odd*/
#include<stdio.h>
int main()
{
int num;

printf("enter the value num");
scanf("%d",&num);
if(num%2==0)
{
printf("\n %d is a even number",num);
}
if(num%2!=0)
{
printf("\n %d is a odd number",num);
}
return 0;
}
