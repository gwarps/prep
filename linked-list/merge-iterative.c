#include "link.h"

Node* mergeLists(Node *h1, Node *h2) {
   Node *head = NULL;
   Node *res = NULL;
   Node *temp = NULL;
   if (h1 == NULL && h2 == NULL) {
      return NULL;
   }
  
   while(h1 != NULL && h2 != NULL) {
      if(h1->data <= h2->data) {
         temp = h1;
         h1 = h1->next;
      } else {
         temp = h2;
         h2 = h2->next;
      }

      if(head == NULL) {
         head = temp;
         res = temp;
      } else {
         res->next = temp;
         res = res->next;
      }
   }
   if(h1 == NULL) {
      res->next = h2;
   }

   if(h2 == NULL) {
      res->next = h1;
   }
   
   return head;
}

int main() {
   Node *h1 = NULL;
   Node *h2 = NULL;

   h1 = Insert(h1, 1);
   h1 = Insert(h1, 3);
   h1 = Insert(h1, 5);
   h1 = Insert(h1, 7);

   h2 = Insert(h2, 2);
   h2 = Insert(h2, 4);
   h2 = Insert(h2, 6);
   h2 = Insert(h2, 8);

   Print(h1);
   Print(h2);
   Node *res = mergeLists(h1, h2);
   Print(res);
   return 0;
}
