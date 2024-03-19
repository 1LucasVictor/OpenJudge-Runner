#include<stdio.h>
int MAX(int a,int b){return a<b?b:a;}
int main(){
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  printf("%d\n",MAX(0,b+c-a));
  return 0;
}
