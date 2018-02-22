#include<stdio.h>
int main()
{
int h1,h2,temp,sum=0,x,a,i;
clrscr();
scanf("%d",&h1);
scanf("\n%d",&h2);
for(i=h1;i<=h2;i++)
{
temp=i;
while(i!=0)
{
  a=i%10;
  x=a*a*a;
  sum=sum+x;
  i=i/10;
}
if(sum==temp)
{
   printf("%d",temp);
}
}

return 0;
}
