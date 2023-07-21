#include <stdio.h>
int main()
{
int n,i;
printf("enter array size\n");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
int pos;
printf("\nenter position");
scanf("%d",&pos);
int num;
printf("\nenter element");
scanf("%d",&num);
n=n+1;
for(i=n-1;i>=pos;i--)
{
a[i+1]=a[i];
}
a[pos]=num;
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);

}
return 0;
}
