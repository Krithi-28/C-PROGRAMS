void swap(int a[],int f,int s)
{
int temp=a[f];
a[f]=a[s];
a[s]=temp;
}
int firstMissingPositive(int *nums, int numsSize){
int i=0,crct;
while(i<numsSize)
{
crct=nums[i]-1;
if(nums[i]>0 && nums[i]<numsSize && nums[i]!=nums[crct])
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
    if(nums[i]!=i+1)
    {
        return i+1;

    }
}
return numsSize+1;
}
