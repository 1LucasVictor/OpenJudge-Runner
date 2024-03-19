#include <stdio.h>
 
int main(){
  int N,a,b,c;
  scanf("%d",&N);
  a=N/100;
  N=N-100*a;
  b=N/10;
  c=N-10*b;
  if(a!=7&&b!=7&&c!=7){
    printf("No");
  }else{
    printf("Yes");
  }
  return 0;
}
    
  
