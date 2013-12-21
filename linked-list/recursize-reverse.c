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
     
      // result starts up building in temp, starting from last node 
      temp = reverse(rest);
      // rest of everything falls in place when list reverses
      first->next->next = first;
      first->next = NULL;
      // only thing i felt wrong with this approach is function is doing 2 things at a time
      //  - modifying list
      //  - returning reversed list's head, that is last node
      // this often seems wrong, since a function is only supposed to be doing 1 task
      // this 
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
