#include<stdio.h>

int main(void){
    
    int A,B,C,ans;
    scanf("%d %d %d",&A,&B,&C);

    ans = C - (A - B);
  	if(ans < 0){
      printf("0");
    }else{
      printf("%d",ans);
    }
    return 0; 
}