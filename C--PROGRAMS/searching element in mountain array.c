#include<stdio.h>
#include <stdbool.h>
int peak(int a[],int n)
{
int start=0;
int end=n-1;
int mid=(start+end)/2;
while(start<end)
{
mid=(start+end)/2;
if(a[mid]>a[mid+1])
{
end=mid;
}
else{
start=mid+1;
}
}
return start;
}
int oabs(int a[],int n,int start,int end,int target)
{
int mid;
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
int fima(int a[],int n,int target)
{
int max=peak(a,n);
int res=oabs(a,n,0,max,target);
if(res!=-1)
{
return res;
}
else
{
return oabs(a,n,max+1,n-1,target);
}
}
int main()
{
int arr[25];
int n,i,res,count=0;
printf("enter array size:");
scanf("%d",&n);
printf("\nenter elements:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("\n");
for (i=0;i<n;i++)
{
printf("%d",arr[i]);
}
int target;
printf("\nenter searching element");
scanf("%d",&target);
int r=fima(arr,n,target);
printf("element present in %d position",r);
return 0;
}
