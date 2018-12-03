#include <stdio.h>
#include <stdlib.h>
int main(){
char* p = (char*)malloc(sizeof(char)*5);
char* q = p;
char* str = (char*)malloc(sizeof(char)*2);
printf("文字を 5 個入力して下さい。ひとつ入力するごとに改行を押してください。:\n");

int i = 1;
while(i <= 5){
  scanf("%s",str);
  *p = str[0];
  p++;
  i++;
}

printf("配列の中身は以下の通りです。\n");
p = q;
int k = 1;
while(k <= 5){
  printf("値:%c  アドレス:%p\n",*p, p);
  p++;
  k++;
  }
}
