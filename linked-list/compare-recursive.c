#include "link.h"

// return 1 if two lists are equal, else 0
int compareLists(Node *h1, Node* h2) {
   if(h1 == NULL && h2 == NULL) {
      printf("BOTH NULL");
      return 1;
   }
   
   if(h1 == NULL || h2 == NULL) {
      return 0;
   }

   if(compareLists(h1->next, h2->next) == 1 && h1->data == h2->data) {
      return 1;
   } else {
      return 0;
   }
}

int main() {
   Node* h1 = NULL;
   Node* h2 = NULL;

   h1 = Insert(h1, 1); 
   h1 = Insert(h1, 2); 
   h1 = Insert(h1, 3); 
   h1 = Insert(h1, 4); 

   h2 = Insert(h2, 1); 
   h2 = Insert(h2, 2); 
   h2 = Insert(h2, 3); 
   h2 = Insert(h2, 4); 

   Print(h1);
   Print(h2);

   printf("Recursive Compare: %d\n", compareLists(h1, h2));
   return 0;
}
