/*WAP to check whether a number is prime or not.*/

#include<stdio.h>
int main()
{
int n,i,count=0;
printf("enter the number");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
break;
}
if(i>n/2)
printf("%d is a prime number",n);
else
printf("%d is not prime number",n);
return 0;
}
