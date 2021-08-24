/*Demonstrate pointer arithmetic by assigning pointer “ptr” to variable “a” which is having
value as 100 in it.Perform increment operation on pointer ptr like ptr=ptr+2 and display
which address that pointer ptr hold.*/

#include<stdio.h>
int main()
{
int a=100,p;
int*ptr=&a;
p=*ptr+2;
printf("\n ptr=%d",p);
printf("\n address of ptr=%p",*ptr);
return 0;
}
