#include <stdio.h>
int main(){
  int N;
  scanf("%d",&N);
  
  int hun,ten,one;
  hun=N/100;
  ten=(N-hun*100)/10;
  one=(N-hun*100-ten*10);
  
  if(hun==7 || ten==7 || one==7){
    printf("Yes\n");
  }	else{
    printf("No\n");
  }
  
  return 0;
}