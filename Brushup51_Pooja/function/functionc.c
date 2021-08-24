/*1. WAP to demonstrate all four categories of functions for volume of the cylinder
(volume of cylinder: 3.14*r*r*h)
) Function without parameters with return value.*/

#include<stdio.h>
int volume();
int main()
{

int r,h,volume;
printf("enter value of r and h");
scanf("%d%d",&r,&h);
printf("%d",volume);
  
  
}

 int volume()
{
  int volume,r,h;
  
volume=3.14*r*r*h;
//printf("%d",volume);
  
return volume;
 

}
