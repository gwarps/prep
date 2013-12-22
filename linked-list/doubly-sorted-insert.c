#include "dlink.h"

Node* sortedInsert(Node* head, int data) {
   Node *newNode = (Node*)malloc(sizeof(Node));
   Node *temp = NULL;

   newNode->next = NULL;
   newNode->prev = NULL;
   newNode->data = data;

   if(head == NULL) {
      return newNode;
   }

   if(data <= head->data) {
      newNode->next = head;
      head->prev = newNode;
      return newNode;
   }

   temp = head;



   while(temp->next != NULL && data > temp->next->data) {
      temp = temp->next;
   }
   // attaching newNode to temp->next
   newNode->next = temp->next;
   if(newNode->next != NULL) {
      temp->next->prev = newNode;
   }
   // attaching temp to newNode
   newNode->prev = temp;
   temp->next = newNode;

   return head;
}

int main() {
   Node* h1 = NULL;
   h1 = Insert(h1, 1);
   //h1 = DInsert(h1, 3);
   //h1 = DInsert(h1, 8);
   //h1 = DInsert(h1, 39);
   //h1 = DInsert(h1, 66);
   //h1 = DInsert(h1, 78);

   Print(h1);
   h1 = sortedInsert(h1, 2);
   Print(h1);

   
   return 0;
}
