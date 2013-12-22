#include<stdio.h>
#include<stdlib.h>

typedef struct node{
   int data;
   struct node* next;
   struct node* prev;
}Node;

Node* Insert(Node* head, int data);
void Print(Node* head);
