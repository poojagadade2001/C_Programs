/*Choice-2: Check whether the given year is LEAP or not.*/

#include<stdio.h>
int main()
{
int n;
printf("enter year");
scanf("%d",&n);

if((n%400==0)&&(n%4==0 && n/100!=0))
 
 {
 printf("leap");
 }
 
 else
 
 {
  printf("not leap");
  }
  
  return 0;
  }
