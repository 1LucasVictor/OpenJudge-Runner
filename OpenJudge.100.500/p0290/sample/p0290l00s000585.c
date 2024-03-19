#include <stdio.h>
#include<math.h>

int main(){
  int i,j,n,x[10000],a=0;
  
  scanf("%d", &n);
  
  if(n >= 1 && n <= 100000){
  
      for(i = 0 ; i < n ; i++){
          scanf("%d",&x[i]);
      }
      
      for(i = 0 ; i < n ; i++){
          for(j = 2 ; j < sqrt(x[i]); j++){
              if((int)sqrt(x[i] )% j == 0){
                  a++;
              break;
              }
          }
      }
      
      printf("%d\n",n-a);
      
  }
}


