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
               	
  if((b - a) <= k && (c - a) <= k &&(d - a)<=k && (e - a) <= k && (c - b) <= k && (d - b) <= k && (e - b) <= k && (d - c) <=k && (e - c) <= k && (e - d) <= k){
    printf("Yay!");
  }else{
    printf(":(");
  }
  return 0;
  
}

