#include <stdio.h>
#include <math.h>

int main(){
  int i,j,k,n,m,a;
  
  while(1){
    scanf("%d",&n);
    if(n>=1 && n<= 10000){
      break;
    }
  }
 k = 0;  
  for(i = 0;i < n ; i++){
    scanf("%d",&m);
    if(m<2 && m>100000000){
      break;
    }
    a = sqrt(m);
    for(j = 1;j < a; j++){
      if(m%j == 0){
	k++;
	break;
      }
    }
    
  }
  printf("%d\n",k);
  
  return 0;
}

