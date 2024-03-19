#include <stdio.h>

int main(){

  int a,b,ans;
  char op;

  while(scanf("%d %c %d",&a,&op,&b)){
    if(op=='+')
     ans=a+b;
    else if(op=='-')
     ans=a-b;
    else if(op=='*')
     ans=a*b;
    else if(op=='/')
     ans=a/b;
    else break;
    printf("%d\n",ans);
    }
    return 0;
}
