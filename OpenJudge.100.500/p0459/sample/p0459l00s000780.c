#include<stdio.h>
int main(){
  int x,y;
  scanf("%d%d",&x,&y);
  printf(y%2||y<x*2||y>x*4?"No":"Yes");
}
