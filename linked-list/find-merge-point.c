#include "link.h"

int mergePoint(Node* h1, Node* h2) {
   int l1 = Length(h1);
   int l2 = Length(h2);
   
   int diff = l1 - l2;
   //printf("length diff: %d\n", diff);
   Node *p = NULL;
   Node *s = NULL;

   if(diff >= 0) {
      p = h1;
      s = h2;
   } else {
      p = h2;
      s = h1;
      diff = -diff;
   }

   while(diff > 0) {
      p = p->next;
      diff--;
   }

   while(p != NULL) {
      if(p == s) {
         return p->data;
      } else {
         p = p->next;
         s = s->next;
      }
   }

   return 0;
}

int main() {
   Node* h1 = NULL;
   Node* h2 = NULL;
   Node* h3 = NULL;
   
   h1 = Insert(h1, 1);
   h1 = Insert(h1, 1);
   h1 = Insert(h1, 3);
   h1 = Insert(h1, 5);

   h2 = Insert(h2, 2);
   h2 = Insert(h2, 4);

   h3 = Insert(h3, 6);
   h3 = Insert(h3, 7);
   h3 = Insert(h3, 8);
 
   h1->next->next->next->next = h3;
   h2->next->next = h3;

   Print(h1);
   Print(h2);
   
   int res = mergePoint(h1, h2);
   printf("Result is:%d\n", res);
   return 0;
}
