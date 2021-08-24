/*WAP to demonstrate typedef keyword.*/

#include<stdio.h>
 int main()

{

typedef int arr[5];
arr x={10,20,30,40,50};
int i;

printf("array element are");

for(i=0;i<5;i++)
{
printf("%d\n",x[i]);
}
}



