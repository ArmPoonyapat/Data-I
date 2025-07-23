#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

node *head=NULL;
 node* newNode(int v)
 {
    node *new_node;
    new_node=(node*)malloc(sizeof(node));
    new_node -> data = v ;
    new_node ->next = NULL;

    return new_node;
 }

int isCircular()
{
    node *ptr=head;
    while(ptr != NULL)
    {
        ptr =ptr->next;
        if(ptr == head)
            return 1;
    }
    return 0;
}


 void DisplayLL()
{
 node *ptr = head;
 while(ptr!=NULL)
 {
     printf(" %d ",ptr->data);
     ptr = ptr -> next;
 }
}

 int main()
 {
     head = newNode(1);
     head -> next = newNode(2);
     head -> next ->next = newNode(3);
     head ->next ->next ->next = newNode(4);

     DisplayLL();

     if(!isCircular())
     {
         node *ptr =head;
         while(ptr->next != NULL){
            ptr = ptr -> next;
         }
        ptr -> next = head;
     }

     printf("\n %d",isCircular());




     return 0;
 }

