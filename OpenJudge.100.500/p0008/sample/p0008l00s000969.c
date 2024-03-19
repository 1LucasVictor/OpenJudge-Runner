#include <stdio.h>

int main(int argc,char* argv[]){
 
  int n;
  while(scanf("%d",&n) != EOF){
    
    printf("%d\n",prime_num(n));
    
  }
 

  return 0;
  
}

int prime_num(int lim){
  int target,diver,count = 0,suc = 1;
  
  //if(lim == 1){return 0;}

  for(target = 2; target <= lim; target++){
    suc = 1; 
    for(diver = 2;(diver*diver) <= target;diver++){

      if((target % diver) == 0){
	suc = 0;
	break;
      }
      
    }
    
    if(suc == 1){
      count++;
    }
  }

  return count;
}