#include "link.h"

Node* deleteDup(Node* head) {
   Node* temp = head;
   while(temp->next != NULL) {
      if(temp->data == temp->next->data) {
         temp->next = temp->next->next;
      } else {
         temp = temp->next;
      }
   }
   return head;
}


int main() {
   Node* h1 = NULL;
   h1 = Insert(h1, 1);
   h1 = Insert(h1, 1);
   h1 = Insert(h1, 1);
   h1 = Insert(h1, 2);
   h1 = Insert(h1, 3);
   h1 = Insert(h1, 4);
   h1 = Insert(h1, 4);
   h1 = Insert(h1, 4);

   Print(h1);
   Print(deleteDup(h1));
   return 0;
}
