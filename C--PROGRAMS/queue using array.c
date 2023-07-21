#include <stdio.h>
#define N 5
int queue[N];
int front=-1,rear=-1;
void enqueue(int x)
{
if (rear==N-1)
{
printf("overflow");
}
else
{
if(front==-1)
{
front=0;
}
rear++;
queue[rear]=x;
}
}
void dequeue()
{
if(rear==-1&&front>rear)
{
printf("under flow");
}
else
{
queue[front]=0;
front=front+1;
printf("\nafter pop\n");
display();
}
}

void peek()
{
if(rear==-1&&front> rear)
{
printf("under flow");
}
else
{
printf("\npeek of the queue is %d\n",queue[front]);
}
}
void display()
{
    int i;
    if(rear==-1&& front>rear)
    {
        printf("underflow");
    }
    else
    {
        for(i=0;i<=rear;i++)
        {
            printf("%d",queue[i]);
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
enqueue(x);
}
display();
dequeue();
peek();
}
