#include <stdio.h>

int main(void){
  int a,b,c,d,e,k,score;
  scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&k);
  if(b - a <= 15){
    score = score + 1;
  }
  if(c - a <= 15){
    score = score + 1;
  }
  if(d - a <= 15){
    score = score + 1;
  }
  if(e - a <= 15){
    score = score + 1;
  }
  if(c - b <= 15){
    score = score + 1;
  }
  if(d - b <= 15){
    score = score + 1;
  }
  if(e - b <= 15){
    score = score + 1;
  }
  if(d - c <= 15){
    score = score + 1;
  }
  if(e - c <= 15){
    score = score + 1;
  }
  if(d - e <= 15){
    score = score + 1;
  }
  if(score = 10){
    printf("Yay!");
  } else {
    printf(":(");
  }
}