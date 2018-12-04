#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  char name[10];
  char email[40];
  struct node* next;
} node;

int main(){
  node *a, *head;
  head = (node*)malloc(sizeof(node));
  a = head;
  int i = 0;
  while(scanf("%s %s", a->name, a->email)!=EOF){
  a->next = (node*)malloc(sizeof(node));
  a = a->next;
  i++;
  }
  i--;
  a[i].next = NULL;
  a = head;
  while(a->next != NULL){
    printf("name: %s\n", a->name);
    printf("email: %s\n", a->email);
    a = a->next;
  }
}
