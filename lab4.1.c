#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct node
{
   int data;
   struct node *next;
};

struct node *head=NULL;

void DisplayLL()
{
  struct node *ptr = head;
  while (ptr!= NULL){
    printf("%d ",ptr ->data);
    ptr = ptr -> next;
  }
}

void DisplayAddressLL()
{
  struct node *ptr;
  ptr = head;
  while(ptr != NULL)
  {
     printf("\nNode val=%d,add=%X\t ", ptr -> data,ptr);
     printf("Next node add=%X\n",ptr->next);

     ptr = ptr -> next;
  }
}

int main()
{

      int x;
      //x=rand()%100 +1;
      //*/

  int n;
  scanf("%d", &n);
  int A[n];

    srand((unsigned) time(NULL));
   for (int i= 0; i<n ; i++){
    x=rand()%100 +1;
    A[i]=x;
   }

   struct node *new_node;
   for(int j=0 ; j<n;j++){
    new_node = (struct node*) malloc (sizeof(struct node));
    new_node->data=A[j];
    new_node->next=head;
    head=new_node;
    }


  DisplayLL();
  DisplayAddressLL();

}
