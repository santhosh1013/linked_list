#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
}*temp;

struct node *create(struct node *head)
{
    struct node *new;
    new=malloc(sizeof(struct node));
    temp->link=new;
    
    printf("Enter the value\n");
    scanf("%d",&new->data);
    new->link=NULL;
    temp=temp->link;
    
    
}
struct node *display(struct node *head)
{
    struct node *t;
    t=head;
    
    while(t!=NULL)
    {
        printf("%d ",t->data);
        t=t->link;
    }
}

int main()
{
    struct node *head;
    head=malloc(sizeof(struct node));
    printf("Enter the value \n");
    scanf("%d",&head->data);
    head->link=NULL;
    temp=head;
    
    create(head);
    create(head);
    
    display(head);
    
}
