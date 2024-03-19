#include<stdio.h>

int main(){

  int S, sec, min, hou;

  S = 46979;
  
  hou = S / 3600;
  min = (S - hou*3600) / 60;
  sec = S - hou*3600 - min*60;

  printf("%d:%d:%d\n",hou,min,sec);

  return 0;
}