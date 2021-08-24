/*Find a substring in a string.*/

#include<stdio.h>
#include<string.h>

int main()
{
char mainstring[40]="program";
char substring[30]="gram";

char*result;

result=strstr(mainstring,substring);
if(result)
{
printf("the string is present");
}
else
printf("string is not present");
}
