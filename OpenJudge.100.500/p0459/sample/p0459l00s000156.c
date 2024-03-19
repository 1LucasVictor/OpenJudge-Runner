#include <stdio.h>
int main(){
  int all,legs;
  scanf("%d %d",&all,&legs);
  for(int tirtle = 0; tirtle <= legs/4; tirtle++){
    for(int crane = 0; crane <= legs/2; crane++){
      if(((tirtle*4) + (crane*2) == legs) && (tirtle + crane) == all){
      	printf("Yes");
      	return 0;
  	  }
    }
  }
  printf("No");
  return 0;
}
