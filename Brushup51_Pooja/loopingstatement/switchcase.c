/*WAP to create a simple calculator for addition, subtraction, multiplication and division using
switch case (Menu driven programming). If user enters operator as choice as follows
a) + for Addition
b) – for Subtraction
c) * for Multiplication
d) / for Division
If user enters wrong choice appropriate message should be displayed.*/

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

case 3:
printf("\n multiplication of given number is:%d",a*b);
break;

case 4:
printf("\n division of given number is:%d",a/b);
break;

case 5:
printf("\n addition of given number is:%d",a%b);
break;

default:
printf("\n enter the right choice");
return 0;
}
}


