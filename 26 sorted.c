include <stdio.h>
int main(void) 
{
int n,a[1000],i,j,t,;
printf("Enter the n value :");
scanf("%d",&n);
printf("\nEnter the series:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=0;j<lim;j++)
{
if(a[i]>a[j])
{
t=a[j];
a[j]=a[i];
a[i]=t;
}	
}
}
printf("\n the result is :%d\t",a[lim%2]);
return 0;
}
