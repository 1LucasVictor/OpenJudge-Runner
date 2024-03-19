#include<stdio.h>
int main(){
  int n,m,a;
  scanf("%d %d",&n,&m);
  while(m--){
    scanf("%d",&a);
    n-=a;
  }
  printf("%s\n",n>0?"No":"Yes");
  return 0;
}
