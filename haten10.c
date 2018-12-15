#include <stdio.h>
#define  PI 3.14159265359

int main() {
  float n;
  printf("数字を入力してください\n");
  scanf("%f", &n);
  double s;
  s = 1.0 * n * n * PI ;
  printf("面積は%f\n", s);
}
