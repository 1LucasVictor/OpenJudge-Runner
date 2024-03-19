#include<stdio.h>


int main(){
   int i,j;
   int R,L;
   int mod;
  int min_mod = 2018;

  scanf("%d %d", &L, &R);
   
  for(i=L; i<R; i++){
    for(j=i+1; j<=R; j++){
       mod = ((i%2019)*(j%2019)) %2019;
       if(mod < min_mod){
        min_mod = mod;
        if(min_mod == 0){
          printf("%d\n", min_mod);
          return 0;
        }
      }
    }
  }

 printf("%d\n",min_mod);

 return 0;
 
   
}