#include<stdio.h>
#include<conio.h>
void main()
{
 long long n;
 int count=0;
 printf("Enter the integer:");
 scanf("%lld",&n);
 while(n!=0)
 {
  n/=10;
  ++count;
 }
 printf("No of digit:"%d,count);
 gethch();
} 
