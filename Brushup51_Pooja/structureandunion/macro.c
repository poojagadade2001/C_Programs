/*Create a structure Student. Create array of 10 students using MACRO and display data in
tabular form.*/

#include<stdio.h>
#define n 10
struct student
{

int rn;
char name[20];
float marks;
};
int main()

{
int i;
struct student s[n];
printf("\n enter the roll number,name,marks of student");
for(i=0;i<n;i++)
{
printf("\n enter student %d record :\n",i+1);
printf("\n enter roll no");
scanf("%d",&s[i].rn);

printf("\n enter name");
scanf("%s",&s[i].name);

printf("\n enter marks");
scanf("%f",&s[i].marks);
}
printf("\n\t roll no\t name\t marks\t\n");
for(i=0;i<n;i++)
{
printf("\t%d\t%s\t%lf\t\n",s[i].rn,s[i].name,s[i].marks);
}
return 0;
}

