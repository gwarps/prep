#include "link.h"

Node* mergeLists(Node* h1, Node* h2) {
   Node* temp = NULL;
   if(h1 == NULL) {
      return h2;
   }

   if(h2 == NULL) {
      return h1;
   }

   if(h1->data <= h2->data) {
      temp = h1;
      temp->next = mergeLists(h1->next, h2);
   } else {
      temp = h2;
      temp->next = mergeLists(h1, h2->next);
   }
   return temp;
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
   //h2 = Insert(h2, 8);
   h1 = NULL;
   h2 = NULL;

   Print(mergeLists(h1, h2));
   return 0;
}
