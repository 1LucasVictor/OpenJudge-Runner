#include <stdio.h>

int main(void){
  int n,_n,a;
  int i,j,k,l;
  while(scanf("%d",&n) != EOF){
    a = 0;
    for(i=0;i<10;i++){
      for(j=0;j<10;j++){
        for(k=0;k<10;k++){
          _n = n-i-j-k;
          if(0<=_n && _n<=9) a++;
        }
      }
    }
    printf("%d\n",a);
  }
  return 0;
}