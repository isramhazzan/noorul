#include<stdio.h>
#include<conio.h>
void main()
  {
    int a,b,c;
    printf(" Enter the a & b value");
    scanf("%d\t%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf( "the swaping a=%d and b=%d",a,b);
  } 
