#include<stdio.h>
 
int abs(int a){
  if(a<0){
    a *= -1;
  }
  return a; 
}
 
int main(){
  int n,k;
  int n_next=-1;
  scanf("%d %d",&n,&k);
  
  while(1){
    n_next = abs(n-k);
    if(n < n_next){
      break;
    }
    n = n_next;
  }
  printf("%d\n",n);
  
  return 0;
}