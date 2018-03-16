#include<stdio.h>
#include<conio.h>
void main()
{
 int a=445,b=544;
 printf("Before swap a=%d \t b=%d",a,b);
 a=a^b;
 b=a^b;
 a=a^b;
 printf("after swap a=%d \t b=%d",a,b);
} 
