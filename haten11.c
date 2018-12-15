#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE *fp;
  int c;

  while((c = getc(stdin)) != -1){
    printf("%c", (char)c);
  }
}
