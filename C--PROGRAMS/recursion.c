#include <stdio.h>
void fun(int x)
{
if(x==0)
{
return ;
}
else
{
printf("%d",x);
fun(x-1);
}
}
void fun1(int x)
{
if(x==0)
{
return ;
}
else
{
    fun1(x-1);
printf("%d",x);

}
}
void fun2(int x)
{
if(x==0)
{
return ;
}
else
{
    printf("%d",x);
    fun2(x-1);
printf("%d",x);

}
}
void fun3(int x)
{
if(x==0)
{
return ;
}
else
{
    printf("%d",x);
    fun3(x-1);
    fun3(x-1);

}
}
int main()
{
int x=3;
fun(x);
printf("\n");
fun1(x);
printf("\n");
fun2(x);
printf("\n");
fun3(x);
}
