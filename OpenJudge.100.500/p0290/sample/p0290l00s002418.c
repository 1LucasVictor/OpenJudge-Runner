#include<stdio.h>
#define N 100000

int main(){
  int A[N];
  int i,n,j;
  int cnt=0,flag;

  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    scanf("%d",&A[i]);
    
    flag=0;
    
    for(j=2;j<A[i];++j){
      if(A[i]%j==0){
	flag=1;
	break;
      }
    }
    
    if(flag==0)
     cnt++;
   
  }
  printf("%d\n",cnt);

  return 0;
}

  