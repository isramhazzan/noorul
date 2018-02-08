#include<stdio.h>
#include<conio.h>
void main()
{
 char s;
 printf("\n Enter the charecter:");
 scanf("%c",&s);
 if((s>='a' && s<=z)||(s>='A' && s<=Z))
 {
  printf("%c is alphabet",s);
 }
 else
 {
  printf("%c is not alphabet",s);
 }
 getch();
} 
