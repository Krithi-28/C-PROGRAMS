#include <stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *newnode,*front=NULL,*rear=NULL,*temp;
int ele;

void enqueue(int x)
{
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=x;
newnode->next=NULL;
if(front==NULL)
{
front=rear=newnode;
}
else
{
rear->next= newnode;
rear=newnode;
}
}
void dequeue()
{
    temp=front;
    if(front==NULL||rear==NULL)
    {
        printf("underflow");
    }
    else
    {
        front=front->next;
    free(temp);
    temp=front;
    }
    printf("\n");
    printf("after pop\n");
    display();
}

void peek()
{
    if(front==NULL)
    {
        printf("cannot find peak");
    }
    else
    {
    printf("\npeek element is %d\n",front->data);
    }
}

void display()
{
if(front==NULL|| rear==NULL)
{
printf("underflow");
}
else
{
temp=front;
while(temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
}
}
int main()
{
int n,i,x;
printf("enter no of elements to be pushed ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&x);
enqueue(x);
}
display();
dequeue();
peek();
return 0;
}
