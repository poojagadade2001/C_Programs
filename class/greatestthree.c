/*wap to find largest 3 number
input =a,b,c
output=largest number*/

#include<stdio.h>
int main()
{
int a,b,c;
printf("enter three number a,b,c");
scanf("\%d%d%d",&a,&b,&c);
if(a>b)
{
   if(a>c)  
   printf("\n largest number=%d",a);
   else
   printf("\n largest number=%d",c);
}
else
 {
   if(b>c)
   printf("\n largest number=%d",b);
   else
   printf("\n largest number=%d",c);
 }
return 0;
}
