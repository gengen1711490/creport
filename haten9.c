#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  char* creature;
  struct node* next1;
  struct node* next2;
} node;

int main(){
  node *a, *b, *aa, *ab, *ba, *bb, *head;

  head = (node*)malloc(sizeof(node));
  (*head).creature = "生物";

  head->next1 = (node*)malloc(sizeof(node));
  a = head->next1;
  (*a).creature = "哺乳類";

  head->next2 = (node*)malloc(sizeof(node));
  b = head->next2;
  (*b).creature = "魚類";

  a->next1 = (node*)malloc(sizeof(node));
  aa = a->next1;
  (*aa).creature = "犬";
  a->next2 = (node*)malloc(sizeof(node));
  ab = a->next2;
  (*ab).creature = "猫";

  b->next1 = (node*)malloc(sizeof(node));
  ba = b->next1;
  (*ba).creature = "マグロ";
  b->next2 = (node*)malloc(sizeof(node));
  bb = b->next2;
  (*bb).creature = "鯖";

  printf("%s\n", head->creature);
  a = head->next1;
  printf("%s  ", a->creature);
  b = head->next2;
  printf("%s\n", b->creature);
  aa = a->next1;
  printf("%s  ", aa->creature);
  ab = a->next2;
  printf("%s  ", ab->creature);
  ba = b->next1;
  printf("%s  ", ba->creature);
  bb = b->next2;
  printf("%s\n", bb->creature);
}
