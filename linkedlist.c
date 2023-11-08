
#include <stdio.h>
#include <stdlib.h>

void main(){
/* Define the data type for the node*/
  
struct node {
  int data;
  struct node  *next;
};
/* Creating the pointers*/
  struct node *head, *newnode, *temp;
  int choice;
  /* assigning header pointer to null because it is not pointing to any node yet */
  head = NULL;
  
  /*create node*/
  while (choice){
  newnode = (struct node *)malloc(si zeof(struct node));

  /*input the data to store*/
  printf("enter data: ");
  scanf("%d", &newnode->data);
  
  newnode->next = NULL;
  if(head == 0) {
    head= temp = newnode;
  }
  else{
     
    temp->next = newnode;
    temp = newnode;  
  }
  printf("do you want to continue(0,1)?: ");
  scanf("%d", &choice);
  }
  temp = head;
  while (temp != NULL)
    {
      printf("%d", temp->data);
      temp = temp->next;
    }
} 

