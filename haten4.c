#include <stdio.h>
#include <math.h>
int main(){
  double sum = 0;
  int n = 1;
  while(n <= 100){
    sum += 1.0 * pow(n, -2);
    n++;
  }
  sum = 6 * sum;
  double pi = sqrt(sum);
  printf("π = %f\n", pi);
}
