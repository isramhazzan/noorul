#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,e,f;
    printf("enter time in hours and minutes");
    scanf("%d%d",&a,&b);
    printf("enter second time in hours and minutes");
    scanf("%d%d",&c,&d);
    e=a-c;
    f=b-d;
    printf("the difference in time is %d\t%d",e,f);
    
}
