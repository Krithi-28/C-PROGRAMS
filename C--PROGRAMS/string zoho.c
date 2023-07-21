#include <stdio.h>
#include<string.h>
int main()
{
char a[100];
int i,num=0,k;
char temp;
gets(a);
printf("%s",a);
for(i=0;a[i]!='\0';i++)
{

    if(a[i]>='0'&&a[i]<='9')
    {
        temp=a[i-1];
        while(a[i]>='0'&&a[i]<='9')
        {
            num=num*10+(a[i]-48);
            i++;
        }
        for(k=1;k<=num;k++)
        {
            printf("%c",temp);
        }
    }
}
return 0;
}
