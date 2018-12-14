#include <stdio.h>
#include <stdlib.h>


void myprintf(char* str){
  while(1){
    if( *str == '\0'){
      break;
    }
    char c = *str;
    putc(c, stdout);
    str++;
  }
}


int main(){
  char* str = "apple\n";
  myprintf(str);
}
