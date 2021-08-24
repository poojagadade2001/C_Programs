/*user defined function*/

#include<stdio.h>
int main()
{
int choice;
int a,b,r;
printf("\nenter 1 for addition");
printf("\nenter 2 for subtraction");
printf("\nenter 3 for multiplication");
printf("\nenter 4 for remainder");
scanf("%d",&choice);
printf("\nenter any two values");
scanf("%d%d",&a,&b);
switch(choice)
{
default:
printf("wrong operation selection");
break;
case 1:
printf("add(%d,%d)=%d",a,b,(a+b));
break;
case 2:
printf("sub(%d,%d)=%d",a,b,(a-b));
break;
case 3:
printf("mul(%d,%d)=%d",a,b,(a*b));
break;
case 4:
printf("mod(%d,%d)=%d",a,b,(a%b));
break;
}
printf("\n\nout of switch");
return 0;
}



