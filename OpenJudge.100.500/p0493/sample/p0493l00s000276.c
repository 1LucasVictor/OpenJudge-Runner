#include<stdio.h>

int main(void){
  int yen, gohyaku, go, happy;
  gohyaku = 0;
  go = 0;
  happy = 0;
  
  scanf("%d",&yen);
  
  while(yen >= 500){
    yen = yen - 500;
    gohyaku = gohyaku + 1;
  }
  while(yen >= 5){
    yen = yen - 5;
    go = go + 1;
  }
  
  happy = 1000 * gohyaku + 5 * go;
  
  printf("%d\n",happy);
  return 0;
}