#include<stdio.h>
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
res=peak(arr,n);
printf("\npeak element in tha array %d",arr[res]);
return 0;
}
