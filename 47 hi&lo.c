#include<stdio.h>
int main()
{
  int a[10],i,n,hi,lo;
  printf("enter the total number of elements in an array");
  scanf("%d",&n);
  printf("enter the numbers");
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
  hi=a[0];
  for(i=1;i<n;i++)
  {
      if(hi<a[i]) 
      {
        hi=a[i];
      }
  }
  lo=a[0];
  for(i=1;i<n;i++)
  {
      if(lo>a[i]) 
      {
        lo=a[i];
      }
  }
    printf("the smallest element is %d\n",lo);
    printf("the largest element is %d",hi);
    return 0;
    
  }
