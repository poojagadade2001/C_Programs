/*largest number in array*/
#include<stdio.h>
#define size 5
int main()
{
int a[size];
int i,max;
printf("\n enter any %d element",size);

for(i=0;i<size;i++)
scanf("%d",&a[i]);

max=a[0];

for(i=0;i<size;i++)
if(max<a[i])
max=a[i];


printf("\n you have entered \n");


for(i=0;i<size;i++)
printf("%d",a[i]);

printf("\n %d is the largest element",max);
return 0;
}
