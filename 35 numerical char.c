#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char n[50];
    int i,count=0,c;
    printf("enter the string");
    gets(n);
    c=strlen(n);
    for(i=0;i<=c;i++)
    {
    if(n[i]=='1'||n[i]=='2'||n[i]=='3'||n[i]=='4'||n[i]=='5'||n[i]=='6'||n[i]=='7'||n[i]=='8'||n[i]=='9'||n[i]=='9'||n[i]=='0')
    {
        count=count+1;
    }
    }
    printf("the total no of numeric characters in string is %d",count);
}
