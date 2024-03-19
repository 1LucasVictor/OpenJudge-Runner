#include<stdio.h>

#define N 10000

int main(){
  int i,j,n,c = 0,ans,A[N];

  scanf("%d",&n);

  for(i = 0 ; i < n ; i++)
    scanf("%d",&A[i]);

  for(i = 0 ; i < n ; i++){
    ans = 1;
    for(j = 2 ; j < A[i] ; j++){
      ans = A[i] % j;
      if(ans == 0) break;      
    } 
    if(ans == 0) continue;
    c++;
  }
  printf("%d\n",c);
  
  return 0;
}