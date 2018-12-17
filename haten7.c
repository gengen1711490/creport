#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n = 3;
	int m = 4;

	int ** c = malloc(sizeof(int*)*n);

  int i = 0;
	while(i < n) {
		c[i] = malloc(sizeof(int)*m);
    i++;
  }
  int k = 0;
	while(k < n) {
    int l = 0;
		while(l < m) {
			c[k][l] = k + l;
			if(l < m -1) {
				printf("%d,", c[k][l]);
			} else {
				printf("%d\n", c[k][l]);
			}
      l++;
		}
    k++;
	}

}
