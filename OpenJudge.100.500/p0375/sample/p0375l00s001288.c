#include<stdio.h>

int main()
{
  int i, j;

  scanf("%d",&i);

  for(j = 3; j <= i ; j++){
    if(j % 3 == 0 || (j-3) % 10 == 0 ){
       printf(" %d", j);
    }
    else if((j-3) % 10 == 0){
      printf(" %d", j);
    }
    else if((j / 10) % 10 == 3){
      printf(" %d", j);
    }
  }
  printf("\n");
  return 0;
}