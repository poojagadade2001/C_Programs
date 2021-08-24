/*Create a structure Employee. Pass it to a function by value.*/

#include<stdio.h>
struct employee
{
  char name[50];
  int id;
  float salary;
  }e;
 int main()
 {
  struct employee e;
   printf("\n enter name,id,salary");
  scanf("%s%d%lf",&e.name,&e.id,&e.salary);
  
  return 0;
  
  
  
  
  printf("\n name=%s",e.name);
  printf("\n id=%d",e.id);
  printf("\n salary=%lf",e.salary);
  }
  
