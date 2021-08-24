/*1. WAP to demonstrate all four categories of functions for volume of the cylinder
(volume of cylinder: 3.14*r*r*h)
b) Function with parameters without return value.*/

#include<stdio.h>
int main()
{

int r,h;
printf("enter value of r and h");
scanf("%d%d",&r,&h);
volume(r,h);
}

void volume(int r,int h)
{
 int volume;
volume=3.14*r*r*h;
printf("%d",volume);

}


