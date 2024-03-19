#include <stdio.h>
 
int main(void){
  int a,b,c,judge=0;
  int n,x;
 
  scanf("%d%d",&n,&x);
  while(n!=0 || x!=0){
    for(a=1;a<=n-2;a++){
      for(b=a+1;b<=n-1;b++){
        for(c=b+1;c<=n;c++){
          if(x==a+b+c)  judge++;
        }
      }
    }
    printf("%d\n",judge);
    scanf("%d%d",&n,&x);
  }
 
  return 0;
}