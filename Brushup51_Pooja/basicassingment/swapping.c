/*Accept two numbers and perform swapping with third variable.*/
#include<stdio.h>
int main()
{
int a,b,temp;
printf("enter the value of a and b");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("\n after swapping a=%d",a);
printf("\n after swapping b=%d",b);
return 0;
}
