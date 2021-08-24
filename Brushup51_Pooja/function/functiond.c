/*1. WAP to demonstrate all four categories of functions for volume of the cylinder
(volume of cylinder: 3.14*r*r*h)
) Function with parameters with return value.*/

#include<stdio.h>
int main()
{

int r,h,volume;
printf("enter value of r and h");
scanf("%d%d",&r,&h);

volume=3.14*r*r*h;
printf("%d",volume);

}

 void volume(int r,int h)
{
 int volume;
volume=3.14*r*r*h;
return 0;

}


