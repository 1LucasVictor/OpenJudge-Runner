#include<stdio.h>
int main(){
  int N;
  scanf("%d",&N);
  for(int i=1;i<=9;i++){
    if(N%i==0&&N/i<=9){
      printf("Yes\n");
      return 0;
    }
    
  }
  printf("No\n");
  
}