#include<stdio.h>
void main()
{
int z;
printf("enter the number which is power of 2");
scanf("%d",&z);
if(z&(z-1)==0)
{
printf("yes");
}
else
{
printf("no");
}
}
