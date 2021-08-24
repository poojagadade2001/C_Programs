/*smallest element in array*/

#include<stdio.h>
#define size 5
int main()
{
int a[size];
int i,min;
printf("\n enter any %d element",size);

for(i=0;i<size;i++)
scanf("%d",&a[i]);

min=a[0];

for(i=0;i<size;i++)
if(min>a[i])
min=a[i];


printf("\n you have entered \n");


for(i=0;i<size;i++)
printf("%d",a[i]);

printf("\n %d is the smallest element",min);
return 0;
}
