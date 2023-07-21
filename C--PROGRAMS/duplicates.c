void swap(int a[],int f,int s)
{
int temp=a[f];
a[f]=a[s];
a[s]=temp;
}
int* findDuplicates(int* nums, int numsSize, int* returnSize)
{
    int i=0,crct,k=0;
while(i<numsSize)
{
    crct=nums[i]-1;
    if(nums[i]!=nums[crct])
    {
        swap(nums,i,crct);
    }

    else
    {
        i++;
    }
}
*returnSize=0;

for(i=0;i<numsSize;i++)
{
    if(nums[i]!=i+1)
    {
         ++ *returnSize;
         nums[k]=nums[i];
        k++;
    }
}
return nums;


}
