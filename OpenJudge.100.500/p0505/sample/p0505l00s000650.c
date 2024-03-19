#include <stdio.h>

int main(){
  int H,N,i,a,g=0;
  scanf("%d",&H);
  scanf("%d",&N);
  for(i=1;i<=N;i++){
    scanf("%d",&a);
    H=H-a;
    
  }
  if(H<=0) printf("Yes\n");
  else printf("No\n");
  return 0;
}
