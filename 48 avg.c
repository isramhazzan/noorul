#include<stdio.h>
void main()
{
  int a[10],k,avg,sum=0,n;
  printf("enter the total number of digits");
  scanf("%d",&n);
  printf("enter the numbers");
  for(k=0;k<n;k++)
  {
  scanf("%d",&a[k]);
  sum=sum+a[k];
  }
  avg=sum/n;
  printf("the average of given numbers is %d",avg);
}
