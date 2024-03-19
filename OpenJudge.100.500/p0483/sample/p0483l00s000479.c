#include<stdio.h>

int main(){
  int N,Na,Nb,Nc;
  scanf("%d",&N);
  Na = N/100;
  Nb = (N-Na*100)/10;
  Nc = N-Na*100-Nb*10;
  if(Na==7 || Nb==7 || Nc==7){
    printf("%s","Yes");
  } else {
    printf("%s","No");
  }
  
  
  
  
 return 0; 
}