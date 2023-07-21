#include <stdio.h>
#include <math.h>
int main()
{
int num,sum,d,i,count=0,flag=0;
scanf("%d",&num);
int sqr=num*num;
int n=sqr;
while(sqr>0)
{
sqr=sqr/10;
count++;
}
sqr=n;
for(i=1;i<=count-1;i++)
{
d=pow(10,i);
if(d==num)
{
continue;
}
sum=sqr/d+sqr%d;
if (sum==num)
{
flag=1;
break;
}
}
printf("%d\n",sum);
if(flag==1)
{
printf("the given number %d is kaprekar number",num);
}
else{
    printf("not kaprekar");
}
return 0;
}
