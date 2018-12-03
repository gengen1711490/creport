#include <stdio.h>
#include <stdlib.h>
int main(){
int* p = (int*)malloc(sizeof(int)*5);
int* q = p;
printf("整数値を 5 個入力して下さい。ひとつ入力するごとに改行を押してください。:\n");

int i = 1;
while(i <= 5){
  scanf("%d",p);
  p++;
  i++;
  }

printf("配列の中身は以下の通りです。\n");
p = q;
int k = 1;
while(k <= 5){
  printf("値:%d  アドレス:%p\n",*p, p);
  p++;
  k++;
  }
}
