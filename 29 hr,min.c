#include <stdio.h>

int main(void)
{
int a,min,hr;
scanf("%d",&a);
if(a<60)
{
	printf("0 %d",a);
}
else if(a>=60)

{
min=a%60;
hr=a/60;
printf("%d %d",hr,min);
}
	return 0;
