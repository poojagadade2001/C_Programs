#include<stdio.h>
#define marks
int main()
{
int a[marks];
int i,max;
printf("\n enter any %d element",marks);

for(i=0;i<marks;i++)
scanf("%d",&a[i]);

max=a[0];

for(i=0;i<marks;i++)
if(max<a[i])
max=a[i];


printf("\n you have entered \n");


for(i=0;i<marks;i++)
printf("%d",a[i]);

printf("\n %d is the average marks",sum/marks);
return 0;
}
