#include <stdio.h>
int main()
{
int i=1;
while(1)
{
printf("%d",i);
++i;
if(i==5)
{
break;
}
}
return 0;
}
