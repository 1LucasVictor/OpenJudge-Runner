#include<stdio.h>

int main(){;
  int n, r[200000], i, j;
  long int ans=-1000000000000;
  
  scanf("%d", &n);
  
  for(i=0; i<n; i++){
    scanf("%d", &r[i]);
  }

  for(i=0; i<n-1; i++){
    for(j=i+1; j<n; j++){
      if(r[j]-r[i]>=ans){
	ans=r[j]-r[i];
      }
    }
  }
  
  printf("%ld\n", ans);
  
  return 0;
}