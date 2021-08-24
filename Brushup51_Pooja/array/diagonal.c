/*Write a C program to compute sum of diagonal elements of a 2D array of size 3*3*/

#include<stdio.h>
int main()
{
int row,column,i,j,a[10][10],sum=0;

printf("\n enter no of rows and column");
scanf("%d%d",&i,&j);

printf("enter element of matrix");
for(row=0;row<i;row++)

{
for(column=0;column<j;column++)

  {
   scanf("%d",&a[row][column]);
   }
  }
  for(row=0;row<i;row++)
   
   {
   sum=sum+a[row][row];
   }
   printf("\n sum of diagonal element of a matrix=%d",sum);
   return 0;
   }
