#include <stdio.h>

int main(void){
  int n;
  int i;
  int b=100000;
  int a;
  scanf("%d ",&n);
  for(i=0;i<n;i++){
    b+=( b*0.05 );
    a=(b/1000)*1000;
    if( a!=b )
      a+=1000;
    b=a;
  }
  printf("%d\n",b);
}