#include<stdio.h>
#include<comi.h>
void main()
{ 
 int n,i,j,a[10],b;
 printf("Entet the N value"\n);
 scanf("%d",&n);
 for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
   for(i=0;i<n;i++)
    {
     for(j=0;j<n;j++)
      {
       if(a[i]>a[j])
        {
        b=a[i];
        a[i]=a[j];
        a[j]=b;
        }
      }
    }
    printf("sorted list\n");
    for(i=0;i<n;i++)
     {
      printf("%d",&a[i]);
      }
     getch();
  }   
