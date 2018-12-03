#include <stdio.h>

double power(double a, int b){
  int i = 1;
  double k = 1.0;
  while(i <= b){
    k *= a;
    i++;
  }
  return k;
}


int main(){
    int i = 0;
    double arctan1 = 0;
    double d;
    while(i < 10000){
      arctan1 += 1.0 * power(-1,i) / (i*2 + 1);
      if(i % 100 == 0){
        printf("pi = %f\n", arctan1 * 4);
      }
      i++;
    }
}
