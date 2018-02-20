#include<stdio.h>
int main()
{
int a,i,j=0;
scanf("%d",&a);
for(i=2;i<a;i++)
{
    if(a%i==0)
        ++j;
}
if(j==0)
    printf("prime number");
else
    printf("not a prime number");
return 0;
}
