/*Demonstrate use of union and find out size of union variable and the attributes from union.*/

#include<stdio.h>
#include<string.h>
int main()
union demo{
int m;
float n;
char ch;
};
  
  {
  union demo u;
  printf("the size of union=%ld\n",sizeof(u));
  u.m=50;
  printf("%d %f %c",u.m, u.n, u.ch);
  
  u.n=0.2;
  printf("%d %f %c",u.m, u.n, u.ch);
   
  u.ch='p';
  printf("%d %f %c",u.m, u.n, u.ch);
 
  }
