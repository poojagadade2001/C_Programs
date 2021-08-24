/*WAP a program to accept Percentage from user and check the GRADE
A. Above 70% - Grade A
B. Between 60% to 70% - Grade B+.
C. Between 45% to 60% - Grade B.
D. Between 35% to 45% - Grade C.
E. Less than 35% - Fail*/

#include<stdio.h>
int main()
{
float per;

printf("enter the percentage");
scanf("%f",&per);
if(70>=per)
printf("grade A");

if(per>=60 && per<70)
printf("grade B+");

if(per>=45 && per<60)
printf("grade B");

if(per>=35 && per<45)
printf("grade c");

if(per<35)
printf("fail");

return 0;
}

