#include <stdio.h>
int min(int a,int b)
{
if(a<b)
{
return a;
}
else
{
return b;
}
}
int main()
{
int n,ans,i,j;
scanf("%d",&n);
int N=2*n;
for(i=0;i<=N;i++)
{
for(j=0;j<=N;j++)
{
ans=min(min(j,N-j),min(i,N-i));
printf("%d",ans);
}
printf("\n");
}
return 0;
}
