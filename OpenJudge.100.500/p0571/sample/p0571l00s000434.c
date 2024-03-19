#include<stdio.h>
int min(int a,int b){
  if(a<b)
    return a;
  else
    return b;
}
int main(){
  int a,b,c;
  scanf("%d %d %d", &a,&b,&c);
  int e=a*b;
  printf("%d",min(e,c));
  return 0;
}