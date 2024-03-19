#include<stdio.h>
int main(){
  int a, b;
  int x;

  scanf("%d%d",&a,&b);
  if((a+b)%2!=0){
    printf("IMPOSSIBLE\n");
  }
  else {
    x=(a+b)/2;
    printf("%d\n",x);
  }
}
    