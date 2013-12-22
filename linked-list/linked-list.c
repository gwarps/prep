#include "link.h"

Node* Insert(Node* head, int data) {
   Node* new = (Node*)malloc(sizeof(Node));
   new->data = data;
   new->next = NULL;

   if(head == NULL) return new;
   Node* temp = head;
   while(temp->next != NULL) {
      temp = temp->next;
   } 
   temp->next = new;
   return head;
}

void Print(Node* head) {
   while(head != NULL) {
      printf("%d->", head->data);
      head = head->next;
   }
   printf("NULL\n");
}

int Length(Node* head) {
   int count = 0;
   while(head != NULL) {
      head = head->next;
      count++;
   }
   return count;
}
