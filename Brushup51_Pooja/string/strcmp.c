 /*WAP to compare two strings using strcmp ().*/

#include<stdio.h>
#include<string.h>
int main()
{
char first[100],second[100];
printf("enter first string");
scanf("%s",first);


printf("enter second string");
scanf("%s",second);


if((strcmp(second,first)==0))
printf("equal");
else
printf("not equal");
return 0;
}
