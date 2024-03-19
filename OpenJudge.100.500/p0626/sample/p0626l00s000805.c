#include <stdio.h>

int main(){
  int n, d, i;
  int c=0;
  int max_n = 10000*101;
  scanf("%d %d", &d, &n);

  for(i=1;i<max_n;i++){
    if(d==1){
      if(i%100==0)c+=1;
    }
    else if(d==2){
      if((i/100)%100==0)c+=1;
    }
    else if(d==0){
      if(i%100!=0)c+=1;
    }
    if(c==n){
      printf("%d\n", i);
      break;
    }
  }
  return 0;
}
