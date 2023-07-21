#include <stdio.h>
#define mul(a,b) a*b
int main()
{
printf("%d",mul(5-2,7+4));
#undef mul(a,b);
printf("%d",mul(5-2,7+4));
return 0;
}
