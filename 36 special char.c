#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[50];
    int i,n=0,c;
    printf("enter the string");
    gets(a);
    c=strlen(a);
    for(i=0;i<=c;i++)
    {
    if(33<=a[i]<=47||58<=a[i]<=64||91<=a[i]<=96||123<=a[i]<=126)
    {
        n=n+1;
    }
    }
    printf("the total no of special characters in string is %d",n);
}
