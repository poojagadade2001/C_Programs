/*wap to find whether a point lies in first,second,third,...x-axis,y-axis or in origin*/

#include<stdio.h>
int main()
{
int x,y;
printf("enter the co-ordinates of x,y");
scanf("\n %d%d",&x,&y);
    if(x>0)
    if(y>0)
printf("\n p(%d,%d)lies on first quadrent",x,y);
    if(x<0)
    if(y>0)
printf("\n p(%d,%d)lies on second quadrent",x,y);
     if(x<0)
     if(y<0)
printf("\n p(%d,%d)lies on third quadrent",x,y);
     if(x>0)
     if(y<0)
printf("\n p(%d,%d)lies on fourth quadrent",x,y);
     if(x==0)
     if(y==0)
printf("\n p(%d,%d)lies on origin",x,y);
     if(x!=0)
     if(y==0)
printf("\n p(%d,%d)lies on x-axis",x,y);
    if(x==0)
    if(y!=0)
printf("\n p(%d,%d)lies on y-axis",x,y);
return 0;
}


