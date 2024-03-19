#include <stdio.h>

int main(){
  int N,N1,N2,N3;
    scanf("%d",&N);
  
  N1=N%10;
  N2=(N/10)%10;
  N3=N/100;
  if(N1==7 || N2==7 || N3==7){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
  return 0;
}