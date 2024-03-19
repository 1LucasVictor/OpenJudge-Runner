#include <stdio.h>
#include <string.h>
#include <math.h>
int main(void){
  long int n,d,x,y;
  long int ans=0;
  scanf("%ld %ld",&n,&d);
  for(int i=0;i<n;i++){
    scanf("%ld %ld",&x,&y);
    if(((x*x)+(y*y))<=(d*d)){
      ans++;
    }
  }
  printf("%ld",ans);
  return 0;
}