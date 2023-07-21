#include<stdio.h>
int main()
{
int num;
scanf("%d",&num);
int n= num;
int s1=num*num;
printf("squared number==> %d\n",s1);
int rem,rev1=0;
while(n>0)
{
rem=n%10;
rev1=rev1*10+rem;
n=n/10;
}
printf("reversed number==> %d\n",rev1);
int s2= rev1*rev1;
printf("squared num after reverse==> %d\n",s2);
int rev2=0;
while(s2>0)
{
rem= s2 % 10;
rev2=rev2*10+rem;
s2=s2/10;
}
printf("reversed square number==> %d\n",rev2);
if(s1==rev2)
{
    printf("%d is an adam number",num);
}
else
{
    printf("%d is not an adam number",num);
}
return 0;
}
