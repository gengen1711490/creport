#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  char creature[20];
  struct node* next1;
  struct node* next2;
} node;

int main(){
  node *a, *b, *aa, *ab, *ba, *bb, *head;
  FILE *fp;
  fp = fopen("haten9_txt.txt","r");

  head = (node*)malloc(sizeof(node));
  fscanf(fp,"%s", head->creature);

  head->next1 = (node*)malloc(sizeof(node));
  a = head->next1;
  fscanf(fp,"%s", a->creature);

  head->next2 = (node*)malloc(sizeof(node));
  b = head->next2;
  fscanf(fp,"%s", b->creature);

  a->next1 = (node*)malloc(sizeof(node));
  aa = a->next1;
  fscanf(fp,"%s", aa->creature);
  a->next2 = (node*)malloc(sizeof(node));
  ab = a->next2;
  fscanf(fp,"%s", ab->creature);

  b->next1 = (node*)malloc(sizeof(node));
  ba = head->next1;
  fscanf(fp,"%s", ba->creature);
  b->next2 = (node*)malloc(sizeof(node));
  bb = head->next2;
  fscanf(fp,"%s", bb->creature);


  printf("%s\n", head->creature);
  printf("%s  ", a->creature);
  printf("%s\n", b->creature);
  printf("%s  ", aa->creature);
  printf("%s  ", ab->creature);
  printf("%s  ", a->creature);
  printf("%s\n", b->creature);

}
