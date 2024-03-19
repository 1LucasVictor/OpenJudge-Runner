#include <stdio.h>

int hi[44];
void fibonatti(int p);
int main(){
  int i,n;

  scanf("%d",&n);
   
  fibonatti(n);
  printf("%d\n",hi[n]);

  return 0;
}

void fibonatti(int p){
  int i,n;
  hi[0]=1;
  hi[1]=1;

  for(i=2;i<=p;i++){
    hi[i]=hi[i-2]+hi[i-1];
    
  }
    
}

