/*Write a program to search particular value in an array and return the index number where it is
located.*/



#include<stdio.h>
int main()
{
int a[100];
int n,i,element,position=0;

  

printf("enter the size of array");
 scanf("%d",&n);


printf("enter array element");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

 printf("enter element to search");
scanf("%d",&element);

for(i=0;i<n;i++)
{
  if(a[i]==element)
  {
   printf("%d found at position %d",element,i+1);
   return 0;
   }
  }
  
  printf("%d not found",element);
  return 0;
  }
