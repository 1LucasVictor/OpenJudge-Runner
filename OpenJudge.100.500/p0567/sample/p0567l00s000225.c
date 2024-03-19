#include<stdio.h>

int main(){
  int a,b,c,w;
  
  scanf("%d",&a);
  scanf("%d",&b);  
  scanf("%d",&c);
  
  w=a-b;
  
  while(w>0 && c>0){
    w--;
    c--;
  }
  printf("%d",c);
  
}