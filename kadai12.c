#include <stdio.h>
#include <stdlib.h>

int strLength(char *str){
  int n = 0;
  while( *str != '\0'){
  str++;
  n++;
  }
  return n;
}

int main(){
  char* str = (char*)malloc(sizeof(char)*100);
  char* p = str;
  printf("文字列を入力して下さい。\n");
  scanf("%s",str);
  printf("順に出力します。\n");
  int k = 1;
  while (k <= strLength(str)) {
    printf("%c",*p);
    p++;
    k++;
  }
  printf("\n");
  printf("逆順に出力します。\n");
  int l = 1;
  while (l <= strLength(str)) {
    p--;
    printf("%c",*p);
    l++;
  }
  printf("\n");
}
