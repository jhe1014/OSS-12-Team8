#include <stdio.h>

void main() {
  int menu;
  
  printf("============= Calculator ===============\n");
  
  while(1) {
    printf("1.addition(+) 2.subtract(-) 3.multiplication(*) 4.division(/)\n");
    printf("select the number:");
    scanf("%d", &menu);
    
    switch(menu) {
    case 1 :
    
    default : printf("Wrong number!\n");
              break;
    }
  }
}
