#include <stdio.h>
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
for (i=0;i<n;i++)
{
printf("%d",arr[i]);
}
int search;
printf("\nenter searching element");
scanf("%d",&search);
for(i=0;i<n;i++)
{
if(search==arr[i])
{
    res=i;
count ++;
break;
}
}
if(count==1)
{
    printf("\nthe element %d present in %d position",search,res);
}
else{
    printf("\nthe element %d is not present in the given array");
}
return 0;
}
