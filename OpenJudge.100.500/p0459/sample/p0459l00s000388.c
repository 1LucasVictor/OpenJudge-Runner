#include<stdio.h>
signed main(){
  int X,Y;
  scanf("%d %d",&X,&Y);
  if(X<=Y/2<=2*X){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
  return(0);
}