#include <stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
struct node *prev;
};
struct node *newnode,*head=NULL,*temp=NULL,*temp1;
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
newnode->next=head;
head->prev=newnode;
}
printf("want to continue?press 1 ");
scanf("%d",&choice);
}
}


void display()
{

temp=head;
while(temp->next!=head)
{
    printf("%d ",temp->data);
    temp=temp->next;
}
printf("%d",temp->data);
}

void delete()
{
    int value;
    temp=head;
    printf("\nenter element to delete ");
    scanf("%d",&value);
    if(value==temp->data)
    {
        temp1=head;
        while(temp1->next!=head)
        {
            temp1=temp1->next;
        }
        temp1->next=head->next;
        head->next->prev=temp1->next;
        head=temp1->next;

        free(temp);
        temp=head;
        display();
    }
    else{
    while(temp->next->data!=value)
    {
        temp=temp->next;
    }
    if(temp->next->next==head)
    {
    temp1=temp->next;
    free(temp1);
    temp->next=head;
    head->prev=temp;
    display();
    }
    else{
    temp1=temp->next;
    temp->next=temp1->next;
    temp1->next=temp1->prev;
    free(temp1);
    display();
    }
    }

}

int main()
{
create();
display();
delete();
}
