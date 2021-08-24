/*WAP to accept five subject marks and find out total and average of the marks.*/
#include<stdio.h>
int main()
{
int total,average,s1,s2,s3,s4,s5;
printf("enter the value of s1,s2,s3,s4,s5");
scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
total=s1+s2+s3+s4+s5;
average=total/5;

printf("\n total=%d",total);
printf("\n average=%d",average);
return 0;
}
