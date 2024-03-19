#include<stdio.h>

int money=100000;

int count5p(int);
int kill1000(void);

int main(){
  int n, i;
  scanf("%d",&n);

  for(i=0;i<n;i++){
    money+=count5p(money);
    money=kill1000();
  }

  printf("%d\n",money);
  
  return 0;
}

int count5p(int money){
  return money/100*5;
}

int kill1000(void){
  if(money-money/1000*1000>0) return money/1000*1000+1000;
  else return money/1000*1000;
}

