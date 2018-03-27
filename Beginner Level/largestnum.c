#include<stdio.h>
int main()
{
int a,b,c;
printf("\n enter number");
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
printf("\n A is largest");
else if((b>a)&&(b>c))
printf("\n B is largest");
else
printf("\n C is largest");
return 0;
}
