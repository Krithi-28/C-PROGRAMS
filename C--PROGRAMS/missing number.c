#include <stdio.h>
void swap(int a[],int f,int s)
{
int temp=a[f];
a[f]=a[s];
a[s]=temp;
}
int missingNumber(int nums[], int numsSize)
{
    int i=0,crct;
while(i<numsSize)
{
crct=nums[i];
if(nums[i]!=numsSize && nums[i]!=nums[crct])
{
swap(nums,i,crct);
}
else
{
i++;
}
}
for(i=0;i<numsSize;i++)
{
    if(nums[i]!=i)
    {
        return i;
        break;
    }
}
return numsSize;
}
int main()
{
int n,i;
printf("enter no of elements: ");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int result=missingNumber(a,n);
printf("%d",result);
}
