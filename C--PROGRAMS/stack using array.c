#include <stdio.h>
#define N 5
int stack[N];
int top=-1;
void push(int x)
{
if(top==N-1)
{
printf("overflow");
}
else
{
top++;
stack[top]=x;
}
display();
}
void pop()
{
    if(top==-1)
    {
        printf("under flow");
    }
    else{
        stack[top]=0;
        top=top-1;
        printf("after pop\n");
        display();
    }
}
void peak()
{
    printf("\npeak element is %d\n",stack[top]);
}
void display()
{
    if(top==-1)
    {
        printf("underflow");
    }
    else
    {
        for(int i =top;i>=0;i--)
        {
           printf("%d",stack[i]);
        }
    }
}
int main()
{
int i,x;
printf("enter 5 elements\n");
for(i=0;i<N;i++)
{
scanf("%d",&x);
push(x);
}
pop();
peak();
display();
return 0;
}
