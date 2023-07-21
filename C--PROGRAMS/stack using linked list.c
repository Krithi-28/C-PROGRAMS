#include <stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *newnode,*head,*top=NULL,*temp;
int ele;

void push(int x)
{
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=x;
newnode->next=top;
top=newnode;
}
void pop()
{
    temp=top;
  if(top==NULL)
  {
      printf("under flow");
  }
  else
  {
    top=top->next;
    free(temp);
    temp=top;
  }
  printf("\n");
  printf("after pop\n");
  display();
}

void peak()
{
    if(top==NULL)
    {
        printf("cannot find peak");
    }
    else
    {
    printf("\npeak element is %d\n",top->data);
    }
}

void display()
{
    if(top==NULL)
    {
        printf("stack is empty");
    }
    else
    {
        temp=top;
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
push(x);
}
display();
pop();
peak();
return 0;
}
