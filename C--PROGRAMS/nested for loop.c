#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<3;i++)
{
for(j=1;j<3;j++)
{
printf("j loop ==> %d %d\n",i,j);
}
printf("i loop ==> %d %d\n",i,j);
}
return 0;
}