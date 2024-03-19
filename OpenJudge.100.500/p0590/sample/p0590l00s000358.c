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
               	
  if((a - b) <= k && (a - c) <= k &&(a - d)<=k && (a - e) <= k &&(b - c) <= k && (b - d) <= k && (b - e) <= k && (c - d) <=k && (c - e) <= k && (d - e) <= k){
    printf("Yay!");
  }else{
    printf(":(");
  }
  return 0;
  
}

