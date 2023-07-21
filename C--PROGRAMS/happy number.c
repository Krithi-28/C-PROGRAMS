#include<stdio.h>
int happy(int n)
{
int rem,sum=0;
while(n>0)
{
rem=n%10;
sum=sum+(rem*rem);
}
return sum;
}
int main()
{
int n;
scanf("%d",&n);
while(n!=1 && n!=4)
{
n=happy(n);
}
if(n==1)
{
printf("Happy number");
}
else
{
printf("not an happy number");
}

}
