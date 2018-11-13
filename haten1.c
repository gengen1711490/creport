#include <stdio.h>
#include <math.h>
int main(){
    int i = 1;
    double e = 1;
    while(i <= 10){
      int p = 1;
      int q = 1;
      while (q <=i) {
        p = p*q;
        q++;
      }
      e += 1.0 * 1 / p;

      i++;
    }
  printf("e = %f \n", e);
}
