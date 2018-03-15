#include<stdio.h>
#include<conio.h>
void main()
{
    char a[20];
    int i,n=0,c;
    printf("enter the char\t");
    gets(a);
    c=strlen(a);
    for(i=0;i<=c;i++)
    {
    if(a[i]==' ')
    {
        n=n+1;
    }
    }
    printf("the total space is %d",n);
}
