#include <Stdio.h>
int reverse(int n)
{
int rem=0;
int rev;
while(n>0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
return rev;
}
int square(int n)
{
int sqr=n*n;
return sqr;
}
int main()
{
int n;
scanf("%d",&n);
int sqr1=square(n);
printf("%d\n",sqr1);
int r=reverse(n);
printf("%d\n",r);
int sqr2=square(r);
printf("%d\n",sqr2);
int r1=reverse(sqr2);
printf("%d\n",r1);
if(sqr1==r1)
{
printf("\nadam number");
}
else
{
printf("\nnot an adam number");
}
return 0;
}
