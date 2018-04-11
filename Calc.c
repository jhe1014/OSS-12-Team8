#include <stdio.h>

void main() {
  int menu,a,b;
  
  printf("============= Calculator ===============\n");
  
  while(1) {
    printf("1.addition(+) 2.subtract(-) 3.multiplication(*) 4.division(/) 5.exit \n");
    printf("select the number:");
    scanf("%d", &menu);
    
    switch(menu) {
    case 1 :{
    scanf("%d %d", &a,&b);
    printf("%d + %d = %d\n", a,b,a+b);
    break;
    }
        
    case 2 :{
    scanf("%d %d", &a,&b);
    printf("%d - %d = %d\n", a,b,a-b);
    break;
    }
    
    case 3 :{
      scanf("%d %d", &a, &b);
      printf("%d * %d = %d\n", a,b,a*b);
      break;
    }
        
    case 4 :{
      scanf("%d %d", &a, &b);
      printf("%d / %d = %d\n", a,b,a/b);
      break;
    }
    
    //후우 예림쨩 하야끄 종료 코딩코딩~~~~~~~~~~어서어서~~~~~~~~~    
        
    default : printf("Wrong number!\n");
              break;
    }
  }
}
