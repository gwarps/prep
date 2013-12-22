#include "dlink.h"

Node* Insert(Node* head, int data) {
   Node* newNode = (Node*)malloc(sizeof(Node));
   newNode->data = data;
   newNode->next = NULL;
   newNode->prev = NULL;

   if(head == NULL) {
      return newNode;
   }

   Node* temp = head;

   while(temp->next != NULL) {
      temp = temp->next;
   }

   temp->next = newNode;
   newNode->prev = temp;

   return head;
}

void Print(Node* head) {
   while(head != NULL) {
      printf("[%d]<=>", head->data);
      head = head->next;
   }
   printf("[NULL]\n");
}

