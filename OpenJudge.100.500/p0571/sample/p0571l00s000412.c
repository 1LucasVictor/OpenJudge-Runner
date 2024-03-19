    #include <stdio.h>
    int n,a,b;
    int main(void){
      if(scanf("%d%d%d",&n,&a,&b)==1);
      int N = a*n;
      if(N < b){
        b = N;
      }
      printf("%d",b);
      return 0;
    }