#include<stdio.h>
#include<conio.h>
void main()
{
    int a=0,b=1,c,i,j;
    printf("the length of fibonacci series is");
    scanf("%d",&j);
    for(i=0;i<j;i++)
    {
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
        
    }
    }
