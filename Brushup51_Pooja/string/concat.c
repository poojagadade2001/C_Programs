/*WAP to concatenate two strings without using library function.*/

#include<stdio.h>
#include<string.h>
int main()

{
char str1[25],str2[25];
int i,j;

printf("enter first string");
scanf("%s",&str1);

printf("enter second string");
scanf("%s",&str2);

for(i=0;str1[i]!='\0';i++)
{

}

for(j=0;str2[j]!='\0';j++,i++)

{
str1[i]=str2[j];
}
str1[i]='\0';
printf("after concatenation=%s",str1);
return 0;
}


