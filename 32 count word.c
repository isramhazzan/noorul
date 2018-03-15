#include<stdio.h>
#include<conio.h>
void main()
{
    char a[20];
    int i,n=1,c;
    printf("enter the string\t");
    gets(a);
    c=strlen(a);
    for(i=0;i<=c;i++)
    {
    if(a[i]==' ')
    {
        n=n+1;
    }
    }
    printf("the total words is %d",n);
}
