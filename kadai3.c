#include <stdio.h>
int main(){
  char name[200];
  printf("名前を入力してね！\n");
  scanf("%s", name);
  printf("こんにちは、 %sさん\n", name);
}
