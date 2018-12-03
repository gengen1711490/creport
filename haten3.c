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

double power(double a, int b){
  int i = 1;
  double k = 1.0;
  while(i <= b){
    k *= a;
    i++;
  }
  return k;
}

double mysin(double x){
  int n = 1;
  int c = 0;
  double l = 0.0;
  while (c <= 15) {
    l += power(x,n) * power(-1,c) / fact(n);
    n += 2;
    c++;
  }
  return l;
}

double mycos(double x){
  int n = 0;
  int c = 0;
  double l = 0.0;
  while (c <= 15) {
    l += power(x,n) * power(-1,c) / fact(n);
    n += 2;
    c++;
  }
  return l;
}





int main(){
  printf("sin(π/6)=%f\n",mysin(3.14159265359/6));
  printf("cos(π/6)=%f\n",mycos(3.14159265359/6));
  printf("sin(π/4)=%f\n",mysin(3.14159265359/4));
  printf("cos(π/4)=%f\n",mycos(3.14159265359/4));
  printf("sin(π/2)=%f\n",mysin(3.14159265359/2));
  printf("cos(π/2)=%f\n",mycos(3.14159265359/2));

}
