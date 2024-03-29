#include <stdio.h>
 
#define min(a,b) (a < b ? a : b)
#define max(a,b) (a < b ? b : a)
#define INF 2e9
 
int main(){
  int N,i,res = -INF,x,y = INF;
  scanf("%d",&N);
  for(i = 0 ; i < N ; i++){
    scanf("%d",&x);
    res = max(res,x-y);
    y = min(x,y);
  }
  printf("%d\n",res);
  return 0;
}
