#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL;

int search_item(int x)
{
    int n=1;
    struct node *ptr = head;
    while(ptr != NULL)
    {

        if (ptr -> data == x )
            return  n;
            n++;
        ptr = ptr-> next;

    }
    return -1;

}

int main()
{

    int i,n;
    int A[6]= {10,2,33,-3,65,67};
    struct node *new_node;

    new_node = (struct node*) malloc (sizeof(struct node));
    new_node -> data = A[0];
    new_node -> next =NULL;
    head = new_node;


    for(i=1; i<=6 ; i++)
    {
        struct node *ptr = head;
        new_node = (struct node*) malloc (sizeof(struct node));
        while ( ptr -> next != NULL){
            ptr = ptr -> next ;
        }
        new_node -> data = A[i];
    new_node -> next =NULL;
    ptr -> next =new_node;

    }


    printf("%d\n",search_item(65));
    printf("%d\n",search_item(50));
}
