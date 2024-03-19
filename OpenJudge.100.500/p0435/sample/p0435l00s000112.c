#include<stdio.h>
#include<math.h>
 
int main(){
  int n, d, count=0;
  if(scanf("%d %d", &n, &d) && n>=1 && d>=0){
      for(int i=0;i<=n; i++){
        int x, y;
        if(scanf("%d %d",&x, &y)){
          if(sqrt(x*x+y*y)<=d)count++;
        }
      }
  }
  printf("%d", count);
  return 0;
}