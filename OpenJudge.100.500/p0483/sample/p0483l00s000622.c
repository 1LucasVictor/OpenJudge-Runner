#include<stdio.h>
#include<stdlib.h>
 
int main(){
    int n;
  scanf("%d",&n);
  
  if(n%10==7){
    printf("Yes");
  }else if((n%100)-(n%10)==70){
    printf("Yes");
  }else if(n-(n%100)==700){
    printf("Yes");
  }else{
    printf("No");
  }
    return 0;
}