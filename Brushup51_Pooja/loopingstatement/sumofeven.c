/*WAP to accept a number from user and find out sum of even digits from that given number.*/

#include<stdio.h>
int add(int n1)
{
int n,r,sum=0;
n=n1;
while(n>0)
{
r=n%10;

if(r%2==0)
{
sum=sum+r;
}
n=n/10;


}

return sum;

}
int main()
{
int n;
printf("\n enter the number");
scanf("\n %d",&n);


printf("sum is : %d",add(n));
return 0;
}

