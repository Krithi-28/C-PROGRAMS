#include <stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
struct node *prev;
};
struct node *newnode,*head=NULL,*temp=NULL;
int ele,choice=1;
void create()
{
while(choice==1)
{
newnode=(struct node*) malloc(sizeof(struct node));
printf("enter the element ");
scanf("%d",&ele);
newnode->data=ele;
newnode->next=NULL;
newnode->prev=NULL;
if(head==NULL)
{
head=temp= newnode;
}
else
{
temp->next=newnode;
newnode->prev=temp;
temp=newnode;
}
printf("want to continue?press 1 ");
scanf("%d",&choice);
}
}


void display()
{

temp=head;
while(temp!=NULL)
{
    printf("%d ",temp->data);
    temp=temp->next;
}
}

void delete()
{
    int value;
    temp=head;
    printf("\nenter element to delete ");
    scanf("%d",&value);
    if(value==temp->data)
    {
        head=temp->next;
        head->prev=NULL;
        free(temp);
        temp=head;
        display();
    }
    else{
    while(temp->next->data!=value)
    {
        temp=temp->next;
    }
    struct node *temp1=temp->next;
    temp->next=temp1->next;
    temp=temp1->next;
    temp->prev=temp1->prev;
    free(temp1);
    display();
    }
}

int main()
{
create();
display();
delete();
}
