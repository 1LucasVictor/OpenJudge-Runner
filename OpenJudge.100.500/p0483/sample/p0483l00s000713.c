#include<stdio.h>
int main(void){
  int N,a,b,c,d;
  scanf("%d",&N);
  a = N/10;
  b = N%10;
  c = a/10;
  d = a%10;
  if(b==7||c==7||d==7){printf("Yes\n");
  }else {printf("No\n");
} return 0;
}
