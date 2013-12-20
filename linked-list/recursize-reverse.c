#include "link.h"

Node* reverse(Node* head) {
   Node* temp = NULL;
   Node* first = NULL;
   Node* rest = NULL;

   if(head == NULL || head->next == NULL) {
      return head;
   } else {
      first = head;
      rest = head->next;
      
      temp = reverse(rest);
      first->next->next = first;
      first->next = NULL;
      return temp;
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
