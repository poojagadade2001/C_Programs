/*WAP which calculate speed for time and distance.*/
#include<stdio.h>;
int main()
{
int speed,time,distance;
printf("enter the value of time and distance");
scanf("%d%d",&distance,&time);
speed=distance/time;
printf("speed=%d",speed);
return 0;
}
