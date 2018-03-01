#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,a[10],temp;
scanf("%d",&n);
for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 } 
  for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
     {
      if(a[i]>a[i])
       { 
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        }
      }
    }
    ptintf("%d",&a[0]);
    getch();
  }  
