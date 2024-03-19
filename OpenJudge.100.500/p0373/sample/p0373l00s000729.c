#include<stdio.h>

int main(void){

  int x,y;
  int i,j;

  while(1){

    scanf("%d %d",&y,&x);

    if(x == 0 && y == 0){
      break;
    }

    for(j = 0; j< y; j++){
      for(i = 0;i < x;i++){
        if(i == 0 || i == x-1){
          putchar('#');
        }else if(j == 0 || j == y-1){
          putchar('#');
        }else{
          putchar('.');
        }
      }
      putchar('\n');
    }
    putchar('\n');
  }

  return(0);
}

