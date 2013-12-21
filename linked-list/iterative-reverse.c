#include "link.h"

Node* reverse(Node* head) {
   Node* temp = NULL;
   Node* temp1 = NULL;
   // pointer that gonna store reversed list by incrementally add
   Node* rest = NULL;

   if(head == NULL || head->next == NULL) {
      return head;
   } else {

      // start with head of list normally
      temp = head;
      while(temp != NULL) {
         // pointer to hold previous temp position
         temp1 = temp;
         temp = temp->next;
         // previous temp position now whatever rest has (starting from NULL)
         temp1->next = rest;
         // rest the assigned the resultant temp1 (so far reversed)
         rest = temp1;
      }
      
      return rest;
   }
}


int main() {
   Node *head = NULL;
   head = Insert(head, 1);
   head = Insert(head, 2);
   head = Insert(head, 3);
   head = Insert(head, 4);
   head = Insert(head, 5);

   Print(head);
   head = reverse(head);
   Print(head);
   return 1;
}
