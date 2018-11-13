#include <stdio.h>

int getSmallestFactor(int a){
  int i = 2;
  while(i*i <= a){
    if(a % i == 0){
       return i;
    }
    i++;
  }
  return 0;
}

int main(){
  int in, fact;
  printf("数字を入れてね　: ");
  scanf("%d", &in);
  if(in == 1){ printf("1 is not prime.\n"); return 0;}

  while(1){
    fact = getSmallestFactor(in);
    if(fact > 0){
      printf("%d*", fact);
      in = in/fact;
    }else{
      printf("%d\n", in);
      return 0;
    }
  }
}
