#include <stdio.h>

int main(void){
  int n,i,ans=0;
  long int d,x,y;
  scanf("%d",&n);
  scanf("%d",&d);
  d=d*d;
  for(i=0;i<n;i++){
    scanf("%ld",&x);
 	scanf("%ld",&y);
    if(x*x+y*y<=d){
      ans++;
    }
  }
  printf("%ld",ans);
  return 0; 
}