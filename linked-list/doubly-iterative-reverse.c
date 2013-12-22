#include "dlink.h"

Node* reverseList(Node* head) {
   Node* temp = head;
   Node* temp1 = NULL;
   Node* rest = NULL;

   if(temp == NULL || temp->next == NULL) {
      return temp;
   }

   while(temp != NULL) {
      temp1 = temp->next;
      temp->next = rest;
      if(rest != NULL) {
         rest->prev = temp;
      }
      rest = temp;
      temp = temp1;
   }
   return rest;
}


int main() {
   Node* h1 = NULL;
   h1 = Insert(h1, 1);
   h1 = Insert(h1, 2);
   h1 = Insert(h1, 3);
   h1 = Insert(h1, 4);
   h1 = Insert(h1, 5);
   h1 = Insert(h1, 6);

   Print(h1);
   Print(reverseList(h1));
   return 0;
}
