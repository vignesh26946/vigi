#include<stdio.h>
int main()
{
int x,y,z;
printf("enter the number");
scanf("%d%d%d",&x&y&z);
if(x>y&&x>z)
printf("x is largest");
elseif(y>z)
printf("y is largest");
else
printf("z is greatest");
}
