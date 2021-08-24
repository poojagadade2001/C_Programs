/*6.Accept three numbers from user and find out largest number among three and also find out
whether that three numbers are equal or not.(else if ladder)*/

#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the any values a,b,c");
scanf("\n %d%d%d",&a,&b,&c);
    {
    if(a>b && a>c)
    
    printf("\n %d is greatest value",a);
   else
   printf("\n %d is greatest value",c);
   }
   
   {
   if(a>b && b>c)
   
   printf("\n %d is greatest value",b);
   else
   printf("\n %d is greatest value",c);
   }
return 0;
}

