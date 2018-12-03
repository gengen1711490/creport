#include <stdio.h>
#include <stdlib.h>

void exchange(int *x, int *y){
  int z;
  z = *x;
  *x = *y;
  *y = z;
}

int main(){
  int *x = (int*)malloc(sizeof(int));
  int *y = (int*)malloc(sizeof(int));
  printf("整数を入力して下さい。\n");
  scanf("%d",x);
  printf("整数を入力して下さい。\n");
  scanf("%d",y);
  printf("xは%d　yは%d\n", *x, *y);
  exchange(x, y);
  printf("xは%d　yは%d\n", *x, *y);
}
