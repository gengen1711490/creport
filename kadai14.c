#include <stdio.h>
#include <stdlib.h>

struct goods {
  char code[10];
  char name[40];
  int price;
};

int main(){
  int i;
  struct goods items[100];

  while( scanf("%s %s %d", items[i].code, items[i].name,&(items[i].price)) != EOF){
  i++;
  }

    printf("\n");
    for(i = 0; i < 4; i++){
    printf("商品コード: %s \n", items[i].code);
    printf("商品名: %s \n", items[i].name);
    printf("値段: %d \n", items[i].price);
  }
}
