#include<stdio.h>
int main(){
  int n,i,total=100000;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    total=total*1.05;
    if(total%1000!=0){
      total=total+1000-total%1000;
    }
  }
  printf("%d\n",total);
  return(0);
}