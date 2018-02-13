#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,temp,sum=0;
 printf("Enter a no");
 scanf("%d",&b);
 temp=b;
 while(b!=0)
 {
  a=b%10;
  sum=sum*10+a;
  b=b%10;
 }
 if(sum==temp)
 {
 printf("Its polindrome");
 }
 else
 {
 printf("not polindrome");
 }
 getch();
} 
