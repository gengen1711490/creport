#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  char name[10];
  char email[40];
  struct node* next;
} node;

int main(){
  node *a, *head;
  FILE *fp;
  head = (node*)malloc(sizeof(node));
  a = head;
  fp = fopen("haten8_txt.txt","r");
  int i = 0;
  while(fscanf(fp,"%s %s", a->name, a->email)!=EOF){
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

  printf("書き換えを行う番号を入力してください。(半角数字で入力してください。)\n");
  scanf("%d", &i);
  a = head;
  int n = 1;
  while(n < i){
    a = a->next;
    n++;
  }

  printf("名前を入力してください。\n");
  scanf("%s", a->name);
  printf("e-mailを入力してください。\n");
  scanf("%s", a->email);

  a = head;
  while(a->next != NULL){
    printf("name: %s\n", a->name);
    printf("email: %s\n", a->email);
    a = a->next;
  }

}
