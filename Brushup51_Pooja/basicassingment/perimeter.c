/*WAP to find out perimeter of the Square and Rectangle.
Perimeter of square=sum of all four sides
Perimeter of Rectangle=2*(l+b)*/
#include<stdio.h>
int main()
{
int square,rectangle,side,l,b;
printf("enter value of l,b");
scanf("%d%d",&l,&b);
printf("enter value of side");
scanf("%d",&side);
square=4*side;
rectangle=2*(l+b);
printf("\n square=%d",square);
printf("\n rectangle=%d",rectangle);
return 0;
}

