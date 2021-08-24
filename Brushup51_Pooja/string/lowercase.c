/*WAP to convert uppercase string into lowercase and vice versa .Write your own functions
for the same.*/

#include<stdio.h>
int main()
{
char str[100];
printf("enter an uppercase string");
scanf("%s",&str);

for(int i=0;str[i]!='\0';i++)
{
str[i]=tolower(str[i]);
}
printf("lower case string is :%s\n",str);
return 0;
}
