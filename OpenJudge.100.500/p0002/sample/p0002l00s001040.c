#include <stdio.h>
#define sqr(x) ((x)*(x))
#define swap(x,y) ((x)^=(y)^=(x)^=(y))
int main(){
  int n,a,b,c;
  scanf("%d",&n);
  while(n){
    scanf("%d%d%d",&a,&b,&c);
    if(a>c) swap(a,c);
    if(b>c) swap(b,c);
    puts((sqr(a)+sqr(b)==sqr(c))?"YES":"NO");
    n--;
  }
}