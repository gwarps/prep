#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef struct node{
   int data;
   struct node* next;
   //struct node* prev;
}Node;


Node* insert(Node* head, int data);
void Print(Node* head);
//void reverse(myNode** head,myNode** tail);

int Length(Node* head);
