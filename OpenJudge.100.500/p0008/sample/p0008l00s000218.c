#include <stdio.h>

int main(){
  int n,i,j,f,c,p[168];

  while(scanf("%d",&n) != EOF){
    if(n == 1) printf("0\n");
    else if (n == 2)printf("1\n");
    else{
    c = 0;
    p[c++] = 2;
    p[c++] = 3;
    for(i=5;i<=n;i += 2){
      f = 0;
     for(j = 1;p[j]*p[j] <= i;j++){
       if(i % p[j] == 0){f = 1;break;}
     }
      if(!f){c++;if(i <= 1000) p[c-1] = i;}
    }
    printf("%d\n",c);
    }
  }
  return 0;
}