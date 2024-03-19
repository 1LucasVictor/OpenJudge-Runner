#include<stdio.h>
int main(){
  int a,b,c,d,e,k,ans;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  scanf("%d",&d);
  scanf("%d",&e);
  scanf("%d",&k);
  
  ans = a + e;
               	
  if(ans <= k){
    printf("Yay!");
  }else{
    printf(":(");
  }
  return 0;
  
}

