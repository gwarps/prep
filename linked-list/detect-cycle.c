#include "link.h"

int hasCycle(Node* head) {
   if(head == NULL) {
      return 0;
   }

   Node* slow = head;
   Node* fast = slow->next;

   while(fast != NULL) {
      if(fast == slow) {
          return 1;
      }

      fast = fast->next;
     
      if(fast != NULL) {
         if(fast == slow) {
            return 1;
         }

         fast = fast->next;
         slow = slow->next;
      }
   }
   return 0;
}


int main() {
   Node* h1 = (Node*)malloc(sizeof(Node));
   Node* head = h1;
   h1->data = 10;

   h1->next = (Node*)malloc(sizeof(Node));
   h1 = h1->next;
   h1->data = 23;

   h1->next = (Node*)malloc(sizeof(Node));
   h1 = h1->next;
   h1->data = 44;   

   h1->next = head->next->next;

   //printf("h1-next->data: %d\n", h1->next->data);
    
   printf("Detecting Cycle: %d\n", hasCycle(head));
   return 0;
}
