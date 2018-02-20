#include<stdio.h>
int main()
{
int u,l,i,k=0;
printf("enter the lower limit  ");
scanf("%d",&l);
printf("enter the upper limit  ");
scanf("%d",&u);
for(i=l;i<=u;i++)
{
  if(i%2!=0)
    printf("\n %d",i);
}

return 0;
}
