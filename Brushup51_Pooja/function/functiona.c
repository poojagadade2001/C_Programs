/*1. WAP to demonstrate all four categories of functions for volume of the cylinder
(volume of cylinder: 3.14*r*r*h)
a) Function without parameters without return value.*/

#include<stdio.h>
int main()
{
volume();
}
void volume()
{
int r,h,volume;
printf("enter value of r and h");
scanf("\n %d%d",&r,&h);
volume=3.14*r*r*h;
printf("%d",volume);
return 0;
}
