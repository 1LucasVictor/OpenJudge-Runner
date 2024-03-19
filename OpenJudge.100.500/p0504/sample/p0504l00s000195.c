#include<stdio.h>
int main(void)
{
  int atk,count=0,hp;
  
  scanf("%d%d",&hp,&atk);
  for(;;){
    hp=hp-atk;
    count++;
    if(hp<=0){
      break;
    }
  }
  printf("%d",count);
  return 0;
}
    
