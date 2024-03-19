#include<stdio.h>
#define NUM 100000

int main(){
  
  int n,S[NUM],q,T[NUM];
  int i,j;
  int count = 0;
  int a[NUM];
  
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    scanf("%d",&S[i]);
  }

  scanf("%d",&q);
  
  for(i=0;i<q;i++){
    scanf("%d",&T[i]);
    a[i] = 0;
  }    
  
  for(i=0;i<n;i++){
    for(j=0;j<q;j++){
      if(S[i] == T[j]){
	a[j]++;
	if(a[j]<2){
	  count++;
	  break;
	}
	
      }
    }
  }
  
  printf("%d\n",count);

  return 0;
}

