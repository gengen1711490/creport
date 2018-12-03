#include <stdio.h>

int fact(int a){
  if(a < 0){
    return 0;
  }else if (a == 0){
    return a = 1;
  }else{
    return a * fact(a-1);
  }
}

int main(){
  int in;
  printf("数字を入れてね　: ");
  scanf("%d", &in);
  int res = fact(in);
  printf(" %d の階乗は %d \n", in, res);
}
