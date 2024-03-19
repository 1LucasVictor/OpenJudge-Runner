#include<stdio.h>
#include<math.h>

int main(){
  
  int i ,a = 0;
  //座標の個数、制限距離、座標の距離
  double N, D, L;
  //X座標、Y座標
  double X[100], Y[100];
  
   char str[1000];
   char hub[1000];
    
   fgets(str, sizeof(str), stdin);
   sscanf(str,"%lf %lf",&N, &D);
  
  for(i = 0; i < N; i++){
     fgets(hub, sizeof(hub), stdin);
     sscanf(hub,"%lf %lf",&X[i], &Y[i]);
    
     L = sqrt(X[i] * X[i] + Y[i] * Y[i]);
       
     if(D >= L){
       
       a += 1;
     
     }
    
  }
    
  printf("%d\n" ,a);
  
  return 0;
  
}