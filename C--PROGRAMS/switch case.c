#include<stdio.h>
int main()
{
char n;
scanf("%c",&n);
switch(n)
{
    case 'a' ...'z' :
        printf("lower case %c",n);
        break;
    case 'A' ...'Z':
        printf("upper case %c",n);
        break;
    case '0' ...'9':
        printf("number %d",n);
        break;
    default:
        printf("invalid");
}
return 0;
}
