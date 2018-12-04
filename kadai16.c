#include <stdio.h>
#include <stdlib.h>

typedef struct person {
  char name[10];
  char email[40];
} personData;

typedef struct company {
personData ceo;
personData employees[100];
} companyData;


int main(){
  companyData c;
  int i = 0;
  scanf("%s %s", c.ceo.name, c.ceo.email);
  while(scanf("%s %s", c.employees[i].name, c.employees[i].email) != EOF){
    i++;
  }
  int employeeNum = i;
  printf("\nCEO\n");
  printf("%s \n", c.ceo.name);
  printf("%s \n", c.ceo.email);
  printf("\nEMPLOYEES\n");
  for(i = 0; i < employeeNum; i++){
    printf("%s \n", c.employees[i].name);
    printf("%s \n", c.employees[i].email);
  }
}
