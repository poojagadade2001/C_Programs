/*WAP using switch case for arithmetic operation on two numbers, if user enters an operator as
choice, the appropriate operation should perform.
If user enters wrong choice appropriate message should get displayed.
i.e. + is for addition
-
is for subtraction*/

#include<stdio.h>
int main()
{
int a,b;
int operation;
printf("\n enter the two numbers");
scanf("%d%d",&a,&b);
printf("\n enter you choice");
scanf("%d",&operation);
switch(operation)
{
     case 1:
     printf("\n addition of given number is:%d",a+b);
     break;

case 2:
printf("\n substraction of given number is:%d",a-b);
break;
     
     
     default:
     printf("\n enter the right choice");
     return 0;
     }
   }  
