/*Write a program that declares a double, an int, and char variables. Next declare and initialize
a pointer to each of the three variables. Your program should then print the address of, and
value stored in.*/


#include<stdio.h>
int main()
{
int a=10,*p;
double b=3.14,*q;
char c='s',*r;






p=&a;
q=&b;
r=&c;



printf("\naddress=%p and value=%d",p,*p);
printf("\naddress=%p and value=%d",q,*q);
printf("\naddress=%p and value=%d",r,*r);

return 0;
}



