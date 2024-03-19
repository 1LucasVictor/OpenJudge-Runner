
#include<stdio.h>

void call(int n)
{
  int i, x;
  for(i = 3; i <= n; i++){
    if(i % 3 == 0){
      printf(" %d", i);
    }else{
      x = i;
      do{
        if(x % 10 == 3){
          printf(" %d", x);
          break;
        }
        x /= 10;
      }while(x);
    }
  }
  printf("\n");
}

int main(void)
{
   int n;
   scanf("%d", &n);
   call(n);
  return(0);
}