#include<stdio.h>
int main()
{
int i,s,sum;
printf("enter the positive integer:");
scanf("%d",&s);
for(i=0;i<=s;++i)
{
sum+=i;
}
printf("sum=%d", sum);
return 0;
}
