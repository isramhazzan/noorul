#include<stdio.h>
#include<conio.h>
void main()
{
 double n1,n2,n3;
 printf("\n Enter the three number:");
 scanf("%lf%lf%lf",&n1,&n2,&n3);
 if(n1>=n2 && n1>n3)
 {
  printf(" \n %2f is largest number",n1);
 }
 if(n2>=n1 && n2>=n3)
 {
  printf("\n %2f is largest number",n2);
 }
 if(n3>=n1 && n3>=n2)
 {
  printf("\n %2f is largest number",n3);
 }
 getch();
} 
