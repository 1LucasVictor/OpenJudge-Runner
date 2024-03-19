#include <stdio.h>
#include <stdlib.h>

int main(){
  int n;
  int S[10000];
  int q;
  int Q[10000];
  int T[10000];
  int i=0,j=0;
  int c=0;
  int k=0;
  
  scanf("%d",&n);
  // S = (int *)malloc(sizeof(int)*n);
  while(i<n){
    if(scanf("%d",&S[i])==EOF) break;
    i++;
  }
  
  i=0;
  scanf("%d",&q);
  //  Q = (int *)malloc(sizeof(int)*q);
  while(i<q){
    if(scanf("%d",&Q[i])==EOF) break;
    i++;
  }
  
  if(q>n){
    //  T = (int *)malloc(sizeof(int)*q);
    for(i=0;i<q;i++){
      T[i] = -1;
    }
  }

  else{
    //  T = (int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
      T[i] = -1;
    }
  }
 
  for(i=0;i<n;i++){
    for(j=0;j<q;j++){
      
      for(k=0;k<n;k++){
	if(S[i]==T[k]) break;
	
	if(S[i]==Q[j]){	
	  T[c] = S[i];
	  c++;
	  break;
	}
      }
    }
  }
  printf("%d\n",c);
  return 0;
}

