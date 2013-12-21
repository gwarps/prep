#include "link.h"

int getNode(Node* head, int posFromTail) {
   Node* ftail = head;
   Node* tail = head;
 
   // make sure how much at first tail needs to move to read at a pos from start
   // in some cases index starts from 0, here its assumed that it starts from 1
   while(posFromTail > 1) {
      //printf("data: %d\n", tail->data);
      tail = tail->next;
      posFromTail--;
   }

   while(tail->next != NULL) {
      
      //printf("start data: %d\n", ftail->data);
      //printf("end data: %d\n", tail->data);
      ftail = ftail->next;
      tail = tail->next;
   }
   return ftail->data;
}


int main() {
   Node* h1 = NULL;
   int x = 3;

   h1 = Insert(h1, 1);
   h1 = Insert(h1, 33);
   h1 = Insert(h1, 83);
   h1 = Insert(h1, 27);
   h1 = Insert(h1, 73);
   h1 = Insert(h1, 4);
   h1 = Insert(h1, 8);
   h1 = Insert(h1, 2);
   Print(h1);
   printf("%d from behind: %d\n", x, getNode(h1, x));
   return 0;
}
