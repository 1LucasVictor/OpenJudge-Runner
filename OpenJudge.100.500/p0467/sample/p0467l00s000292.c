#include<stdio.h>
 
int main(void){
  int a,b,c,k;
  int sum=0;
  
  scanf("%d %d %d %d",&a,&b,&c,&k);
  
  while(a!=0&&k!=0){
    sum+=1;
    a--;
    k--;
  }
  while(b!=0&&k!=0){
    sum+=0;
    b--;
    k--;
  }
  while(c!=0&&k!=0){
    sum-=1;
    c--;
    k--;
  }
  printf("%d\n",sum);
  return(0);
}