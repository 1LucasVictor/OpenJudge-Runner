#include <stdio.h>

int main(void){
  int n;

  while(scanf("%d",&n) != EOF){
    switch(n % 4){
      case 0:printf("1\n");break;
      case 1:printf("4\n");break;
      case 2:printf("6\n");break;
      case 3:printf("4\n");break;
    }
  }

  return 0;
}