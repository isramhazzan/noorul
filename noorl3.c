#include<stdio.h>
#include<conio.h>
void main()
{
 char c;
 int lowervowel1,uppervowel2;
 printf("\n Enter the charecter:");
 scanf("%c",&c);
 lowervovel1=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
 uppervowel2=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
 if(lowervowel1||uppervowel2)
 {
  printf("%c is vowel",c);
 }
 else
 {
  printf("%c is consonent",c);
 }
 getch();
} 
 
