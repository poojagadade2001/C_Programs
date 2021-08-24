/*factorial using loop*/
#include<stdio.h>
int main()
{
int i,n,f=1;
printf("enter any number");
scanf("\n %d",&n);
for(i=1;i<=n;i++)
f=f*i;
printf("factorial of %d=%d",n,f);
return 0;
}
