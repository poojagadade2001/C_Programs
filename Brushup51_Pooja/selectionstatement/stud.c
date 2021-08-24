/*WAP to accept Cost Price from user and ask whether the user is a student or not. If the user
is student and cost price is greater than 500, give discount of 10% ELSE discount will be 5%. If
user is not student and cost price is greater 500 then give discount of 8% ELSE discount will be
2%. (Take all inputs from USER)*/

#include<stdio.h>
int main()
{
int cp;
char stud,user,y,n;
printf("is user is student?(y/n)");
scanf("%d",&user);

printf("enter the cost price");
scanf("%d",&cp);

if(user=y)
  {
    if(cp>500)
     {
     printf("discount on %d=10 present",cp);
     }
    else if(cp<500)
     {
     printf("discount on %d=5 persent",cp);
     }
    }
     else if(user=n)
     {
     
     
     if(cp>500)
    {
      printf("discount on %d=8 percent",cp);
    }
     else if(cp<500)
    {
    printf("discount on %d=2 percent",cp);
    }
    }
    return 0;
    }      

