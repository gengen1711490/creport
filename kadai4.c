#include <stdio.h>
int main(){
  int a;
  int b;
  int c;
  printf("2つの数字を入力してください。\n");
  scanf("%d %d", &a, &b);
  c = a+b;
  printf("2つの数字の和は %d です\n", c);
}
