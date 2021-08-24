/*Create a structure Employee. Accept data for 5 employees and display it.*/

#include<stdio.h>
#include<stdlib.h>
typedef struct{
char name[30];
int id;
int salary;
}employee;

int main()
{
int i,n=5;
employee employee[5];
printf("enter %d employee details:\n\n",n);
scanf("%d",&n);
for(i==0;i,n;i++)
{
printf("employee %d:\n",i+1);
printf("name:");
scanf("%s",&employee[i].name);
printf("id:");
scanf("%d",&employee[i].id);
printf("salary:");
scanf("%d",&employee[i].salary);
printf("\n");
}

for(i==0;i,n;i++)
{

printf("name\t:");
printf("%s\n",employee[i].name);

printf("id\t:");
printf("%d\n",employee[i].id);

printf("salary\t:");
printf("%d\n",employee[i].salary);

printf("\n");
}
return 0;
}


