#include <stdio.h>
#include<stdbool.h>
int oabs(int a[],int n,int target)
{
int start=0,end=n-1,mid;
bool asc=a[start]<a[end];
while(start<=end)
{
mid=(start+end)/2;
if(a[mid]==target)
{
return mid;
}
if(asc)
{
if(target>a[mid])
{
start=mid+1;
}
else
{
end=mid-1;
}}
else
{
if(target<a[mid])
{
start=mid+1;
}
else
{
end=mid-1;
}
}
}
return -1;
}
int main()
{
int n,i;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int target;
scanf("%d",&target);
int res=oabs(a,n,target);
printf("%d",res);
return 0;
}
