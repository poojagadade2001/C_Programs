/*WAP to convert LOWERcase string into uppercase and vice versa .Write your own functions
for the same.*/


#include<stdio.h>
int main()
{
char str[100];
printf("enter an lowercase string");
scanf("%s",&str);

for(int i=0;str[i]!='\0';i++)
{
str[i]=toupper(str[i]);
}
printf("upper case string is :%s\n",str);
return 0;
}
