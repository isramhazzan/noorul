#include<stdio.h>
int main()
{
  int a,rem,s,i,count=0;
  printf("enter the number");
  scanf("%d",&a);
  while(a!=0)
  {
    rem=a%10;
    s=s+rem;
    a=a/10;
    count++;
  }
  printf("the total no digits is %d",count);
  return 0;
}
