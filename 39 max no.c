#include<stdio.h>
void main()
{
    int a[20],i,max;
    printf("enter 10 elements");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    a[0]=max;
    for(i=0;i<10;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("the largest element is %d",max);
}
