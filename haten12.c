#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE *fp,*fout;
  int c;

  fp = fopen("goods.txt", "r");
  fout = fopen("goods2.txt","w");

  while(1){
    if(feof(fp)){
      break;
    }
    c = getc(fp);
    putc(c, fout);
  }
}
