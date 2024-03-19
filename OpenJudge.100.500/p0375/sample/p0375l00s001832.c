#include<stdio.h>

int main()
{
  int i, j;

  scanf("%d",&i);

  for(j = 3; j <= i ; j++){
    //3の倍数の表示
    if(j % 3 == 0 ){
       printf(" %d", j);
    }
    //13,23,33,...
    else if((j-3) % 10 == 0){
      printf(" %d", j);
    }
    //30,300,3000がふくまれる時表示する
    else if((j / 10) % 10 == 3 || (j / 10) % 10 == 30 || (j / 10) % 10 == 300){
      printf(" %d", j);
    }
  }
  printf("\n");
  return 0;
}