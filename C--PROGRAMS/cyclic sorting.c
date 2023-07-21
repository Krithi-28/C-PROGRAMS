#include <stdio.h>
void swap(int a[],int f,int s)
{
int temp=a[f];
a[f]=a[s];
a[s]=temp;
}
void cyclicsort(int a[],int n)
{
int i=0,crct;
while(i<n)
{
crct=a[i]-1;
if(a[i]!=a[crct])
{
swap(a,i,crct);
}
else
{
i++;
}
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
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
cyclicsort(a,n);
}
