#include <stdio.h>
int main(){
  int n,ab[81]={},i,j;
  for(i=0;i<9;i++){
    for(j=0;j<9;j++){
      ab[i*9+j]=(i+1)*(j+1);
    }
  }
  scanf("%d",&n);
  for(i=0;i<81;i++){
    if(n==ab[i]){
      printf("Yes");
      return 0;
    }
  }
  printf("No");
}